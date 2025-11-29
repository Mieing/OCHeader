@class AWEPlayInteractionContext, AWECommonButtonInfoModel;
@protocol AWEPlayInteractionBottomButtonComponentProtocol;

@interface AWEPlayInteractionBottomButtonSendCollectViewModel : NSObject <AWEPlayInteractionBottomButtonComponentViewModelProtocol>

@property (retain, nonatomic) AWECommonButtonInfoModel *infoModel;
@property (weak, nonatomic) AWEPlayInteractionContext *context;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonComponentProtocol> component;

+ (BOOL)shouldShowButtonForModel:(id)a0 context:(id)a1;
+ (Class)aAWEFeedModuleServiceDOUYINLiteAdaperClass;

- (id)trackParams;
- (long long)activateType;
- (id)initWithInfoModel:(id)a0 context:(id)a1 component:(id)a2;
- (void)didClickView:(id)a0 atPosition:(long long)a1 withModel:(id)a2;
- (id)aAWEFeedModuleServiceDOUYINLiteAdaper;
- (void)handleSendGoldCompletionWithModel:(id)a0 error:(id)a1 fromPanel:(BOOL)a2;
- (void)openSendGoldCollectPanel;
- (BOOL)shouldShowSendPanel;
- (void).cxx_destruct;

@end
