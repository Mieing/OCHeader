@class NSString, YataRenderNode, NSArray;

@interface YataAfterRenderItemModel : NSObject

@property (copy, nonatomic) NSString *operatorId;
@property (weak, nonatomic) YataRenderNode *renderNode;
@property (retain, nonatomic) NSArray *afterRenderEventList;

- (id)initWithRenderNode:(id)a0 afterRenderEventList:(id)a1;
- (void).cxx_destruct;

@end
