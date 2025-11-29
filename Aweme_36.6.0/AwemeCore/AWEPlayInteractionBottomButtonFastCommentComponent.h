@class AWEPageContext;
@protocol AWEPlayInteractionBottomButtonContextProtocol;

@interface AWEPlayInteractionBottomButtonFastCommentComponent : NSObject <AWEPlayInteractionBottomButtonComponentProtocol> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ fastCommentView;
}

@property (nonatomic) long long avoidStatus;
@property (nonatomic, retain) AWEPageContext<AWEPlayInteractionBottomButtonContextProtocol> *btnContext;
@property (nonatomic, weak) void /* function */ componentDelegate;

+ (BOOL)shouldShowButtonForModel:(id)a0 context:(id)a1;

- (void)viewController_combinedDidEndDisplaying;
- (id)initWithModel:(id)a0 context:(id)a1;
- (long long)activateType;
- (id)infoModel;
- (BOOL)canRespondToTriggerType:(long long)a0;
- (void)didShowViewByTriggerDelay:(BOOL)a0;
- (id)bizParamsForShowEventTrack;
- (id)bizParamsForClickEventTrack;
- (void).cxx_destruct;
- (id)init;
- (id)buttonView;

@end
