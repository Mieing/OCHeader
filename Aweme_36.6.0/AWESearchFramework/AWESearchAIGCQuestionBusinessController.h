@class NSString;
@protocol AWESearchAIGCQuestionBusinessControllerDelegate;

@interface AWESearchAIGCQuestionBusinessController : NSObject

@property (copy, nonatomic) NSString *rotateTosid;
@property (weak, nonatomic) id<AWESearchAIGCQuestionBusinessControllerDelegate> delegate;

+ (id)getBoundingBoxWithCmdModel:(id)a0;
+ (id)getImageModelWithCmdModel:(id)a0;

- (id)cachalotView;
- (void)searchAICardSwitchQuestionToIndex:(long long)a0;
- (id)roundInfoManager;
- (void)aiCardSwitchQuestionWithParams:(id)a0;
- (id)currentSearchID;
- (void)reloadBubbleViewWithViewModel:(id)a0 questionIndex:(long long)a1;
- (BOOL)sendEventToAIMessageCardWithEvent:(id)a0 params:(id)a1;
- (BOOL)updateStatusWithCmdModel:(id)a0;
- (id)fetchAllBubbleNodes;
- (void)reloadBubbleViewWithViewModel:(id)a0 imageModel:(id)a1 boxArray:(id)a2 questionIndex:(long long)a3;
- (id)subQuestionDataController;
- (void)updateBubbleViewWithViewModel:(id)a0 imageModel:(id)a1 boxArray:(id)a2 questionIndex:(long long)a3;
- (void)reloadBubbleViewWithViewModel:(id)a0 boxArray:(id)a1 questionIndex:(long long)a2;
- (void)reloadBubbleViewWithViewModel:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)handleWithCmdModel:(id)a0;
- (void)updateBubbleViewModel:(id)a0 withCmdModel:(id)a1;
- (void).cxx_destruct;

@end
