//
// Licensed under the terms in License.txt
//
// Copyright 2010 Allen Ding. All rights reserved.
//

#import "KiwiConfiguration.h"
#import "KWBlockNode.h"
#import "KWExampleNode.h"

#if KW_BLOCKS_ENABLED

@interface KWBeforeAllNode : KWBlockNode<KWExampleNode>

#pragma mark -
#pragma mark Initializing

+ (id)beforeAllNodeWithCallSite:(KWCallSite *)aCallSite block:(KWVoidBlock)aBlock;

@end

#endif // #if KW_BLOCKS_ENABLED
