@class NSString, IESECLynxCard;

@interface IESECShopPopupOverlayView : UIView <IESECLynxCardDelegate, IESECListCardsContextDelegate> {
    IESECLynxCard *_lynxCard;
    BOOL _isViewActivated;
    NSString *_templateURL;
}

@property (copy, nonatomic) NSString *contextIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidFirstScreen:(id)a0;
- (void)lynxCard:(id)a0 sizeDidChanged:(struct CGSize { double x0; double x1; })a1;
- (void)lynxCard:(id)a0 didLoadFail:(id)a1;
- (void)currentCardsWriteAlogMethodName:(id)a0 paramModel:(id)a1 result:(id)a2 context:(id)a3;
- (BOOL)pageDidAppeared;
- (id)currentListContextIdForCards;
- (void)updateTemplateWithURL:(id)a0;
- (id)makeLynxCardModel;
- (void)applicationWillResignActive:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)configureSubviews;

@end
