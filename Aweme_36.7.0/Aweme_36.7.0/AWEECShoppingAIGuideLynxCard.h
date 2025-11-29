@class NSString, AWEECShoppingAIGuideCardSettingProvider, UIView, AWEECShoppingAIGuideMessageSingleLynxViewModel;
@protocol AWEECShoppingAIGuideLynxCardDelegate, AnnieXContainerBaseProtocol;

@interface AWEECShoppingAIGuideLynxCard : AWEECShoppingAIGuideBaseCard <AWEECShoppingAIGuideAnnieXDelegate>

@property (retain, nonatomic) AWEECShoppingAIGuideMessageSingleLynxViewModel *lynxViewModel;
@property (nonatomic) double intrinsicContentHeight;
@property (copy, nonatomic) NSString *lynxCardID;
@property (weak, nonatomic) id<AWEECShoppingAIGuideLynxCardDelegate> lynxDelegate;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *cardView;
@property (weak, nonatomic) AWEECShoppingAIGuideCardSettingProvider *cardProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)containerDidFirstScreen:(id)a0;
- (id)lynxModel;
- (void)setupUIWithModel:(id)a0;
- (id)initWithCardProvider:(id)a0;
- (void)enqueueLynxCard;
- (void)tryUpdateCardSize:(struct CGSize { double x0; double x1; })a0 callTrace:(id)a1;
- (void)container:(id)a0 customReuseDidChangeSize:(struct CGSize { double x0; double x1; })a1;
- (void)cleanForReuse;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (struct CGSize { double x0; double x1; })expectedSize;

@end
