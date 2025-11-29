@class AWEPlayInteractionContext, AWECommonButtonInfoModel;
@protocol AWEPlayInteractionBottomButtonComponentProtocol;

@interface AWEPlayInteractionSoftAdLiveBottomButtonViewModel : NSObject <AWEPlayInteractionBottomButtonComponentViewModelProtocol>

@property (retain, nonatomic) AWECommonButtonInfoModel *infoModel;
@property (weak, nonatomic) AWEPlayInteractionContext *context;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonComponentProtocol> component;

+ (BOOL)shouldShowButtonForModel:(id)a0 context:(id)a1;

- (long long)activateType;
- (void)didShowViewByTriggerDelay:(BOOL)a0;
- (id)bizParamsForShowEventTrack;
- (id)bizParamsForClickEventTrack;
- (id)initWithInfoModel:(id)a0 context:(id)a1 component:(id)a2;
- (void)didClickView:(id)a0 atPosition:(long long)a1 withModel:(id)a2;
- (void).cxx_destruct;

@end
