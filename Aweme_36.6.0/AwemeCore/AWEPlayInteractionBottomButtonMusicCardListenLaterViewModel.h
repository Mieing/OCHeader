@class AWEPlayInteractionContext, AWECommonButtonInfoModel;
@protocol AWEPlayInteractionBottomButtonComponentProtocol;

@interface AWEPlayInteractionBottomButtonMusicCardListenLaterViewModel : NSObject <AWEPlayInteractionBottomButtonComponentViewModelProtocol>

@property (retain, nonatomic) AWECommonButtonInfoModel *infoModel;
@property (weak, nonatomic) AWEPlayInteractionContext *context;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonComponentProtocol> component;
@property (nonatomic) BOOL needBlockFlag;

+ (BOOL)shouldShowButtonForModel:(id)a0 context:(id)a1;

- (long long)activateType;
- (BOOL)canRespondToTriggerType:(long long)a0;
- (void)didShowViewByTriggerDelay:(BOOL)a0;
- (id)initWithInfoModel:(id)a0 context:(id)a1 component:(id)a2;
- (void)didClickView:(id)a0 atPosition:(long long)a1 withModel:(id)a2;
- (void)hideListenLaterButton;
- (void).cxx_destruct;
- (void)setupNotifications;

@end
