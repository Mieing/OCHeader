@class AWEPlayInteractionContext, NSString, AWECommonButtonInfoModel;
@protocol AFDFeedLoginGuideManagerProtocol, AWEPlayInteractionBottomButtonComponentProtocol;

@interface AWEPlayInteractionBottomButtonLoginGuideViewModel : NSObject <AWEUserMessage, AWEPlayInteractionBottomButtonComponentViewModelProtocol>

@property (retain, nonatomic) AWECommonButtonInfoModel *infoModel;
@property (weak, nonatomic) AWEPlayInteractionContext *context;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonComponentProtocol> component;
@property (retain, nonatomic) id<AFDFeedLoginGuideManagerProtocol> manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowButtonForModel:(id)a0 context:(id)a1;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (long long)activateType;
- (BOOL)canRespondToTriggerType:(long long)a0;
- (void)didShowViewByTriggerDelay:(BOOL)a0;
- (id)initWithInfoModel:(id)a0 context:(id)a1 component:(id)a2;
- (void)didClickView:(id)a0 atPosition:(long long)a1 withModel:(id)a2;
- (BOOL)canShowLoginGuideBtn;
- (void).cxx_destruct;
- (void)dealloc;

@end
