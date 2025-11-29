@class NSString, AWEOriginalAdCardModel, NSDictionary, NSDate, NSError, UIViewController;
@protocol AWEPlayInteractionViewControllerProtocol;

@interface AWEAdLynxPromptView : AWEBDARifleView <AWEAdPromptView, AWEBDARifleViewDelegate>

@property (retain, nonatomic) AWEOriginalAdCardModel *cardModel;
@property (retain, nonatomic) NSDate *loadTime;
@property (copy, nonatomic) id /* block */ didLynxFailToLoadHandler;
@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *interactionVC;
@property (nonatomic) unsigned long long cardStatusCode;
@property (copy, nonatomic) NSDictionary *liveRoomInfo;
@property (copy, nonatomic) NSString *requestURL;
@property (nonatomic) double loadDuration;
@property (retain, nonatomic) NSError *loadError;
@property (copy, nonatomic) id /* block */ didFailToLoadHandler;
@property (copy, nonatomic) id /* block */ didFinishLoadHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invokeJSWithEvent:(id)a0 params:(id)a1;
- (id)lynxBridge;
- (void)rifleView:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)rifleView:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)rifleView:(id)a0 didLoadFailedWithURL:(id)a1 error:(id)a2;
- (double)adVisibleTime;
- (void)tryStartLoadWithCardModel:(id)a0 awemeModel:(id)a1 cardCode:(unsigned long long)a2 needClueAdAutoOpen:(BOOL)a3;
- (BOOL)enableDynamicLayout;
- (BOOL)isLiveCardScene;
- (void)trackOthershowOver;
- (void)notifyDialogPopUpEvent;
- (void)notifyFeedCardStartUnfoldEvent;
- (void)notifyOnContainerVisibilityChangeFromLive;
- (void)notifyOnLeaveConvertPage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withAweme:(id)a1 withCardCode:(unsigned long long)a2 needClueAdAutoOpen:(BOOL)a3 interactionVC:(id)a4 withFailHandler:(id /* block */)a5;
- (void).cxx_destruct;
- (id)contentView;
- (id)view;
- (void)reset;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
