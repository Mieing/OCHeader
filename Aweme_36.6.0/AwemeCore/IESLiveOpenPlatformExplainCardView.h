@class NSString, IESLiveOpenPlatformExplainCardViewModel;

@interface IESLiveOpenPlatformExplainCardView : UIView <IESLiveOpenPlatformExplainCardViewProtocol>

@property (retain, nonatomic) IESLiveOpenPlatformExplainCardViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithViewModel:(id)a0;
- (void)handleCardDidShow;
- (void)handleCardDidHide;
- (void)_setupNormalStyleUI;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)_tapAction;
- (void)_closeAction;

@end
