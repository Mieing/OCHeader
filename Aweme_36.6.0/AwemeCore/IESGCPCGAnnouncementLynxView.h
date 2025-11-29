@class NSString, IESGCPPBAnnouncementPopup, UIView;
@protocol AnnieXContainerBaseProtocol, IESHYContainerProtocol;

@interface IESGCPCGAnnouncementLynxView : UIView <IESHYHybridViewLifecycleProtocol, IESGCPCGLayerItemViewProtocol>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *lynxView;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *lynxCardView;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) struct CGSize { double width; double height; } configSize;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) IESGCPPBAnnouncementPopup *announcementPopup;
@property (copy, nonatomic) id /* block */ openAnnouncementUrlBlock;
@property (copy, nonatomic) id /* block */ popupClickBlock;
@property (nonatomic) BOOL isLynxLoadFailed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)sendEvent:(id)a0 params:(id)a1;
- (void)showOnView:(id)a0;
- (id)descriptionAttributedString;
- (void)loadURL:(id)a0 withQueryItems:(id)a1;
- (void)_clearLynxView;
- (void)_setupConstraint;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
