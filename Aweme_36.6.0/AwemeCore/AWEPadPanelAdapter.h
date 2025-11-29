@class AWEPadPanelHelper, NSString;
@protocol AFDModalViewHelperProtocol;

@interface AWEPadPanelAdapter : HTSService <AWEPadPanelAdapter>

@property (retain, nonatomic) AWEPadPanelHelper<AFDModalViewHelperProtocol> *helper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)panelViewMasAdapt:(id)a0 superView:(id)a1 height:(double)a2;
- (BOOL)showPanelAnimated:(id)a0 preAction:(id /* block */)a1 addition:(id /* block */)a2 completion:(id /* block */)a3;
- (BOOL)dismissPanelAnimated:(id)a0 preAction:(id /* block */)a1 addition:(id /* block */)a2 completion:(id /* block */)a3;
- (BOOL)dismissPanelAnimated:(id)a0 completion:(id /* block */)a1;
- (id)addCloseButtonTo:(id)a0 actionTarget:(id)a1 action:(SEL)a2 image:(id)a3;
- (id)addCloseButtonTo:(id)a0 actionTarget:(id)a1 action:(SEL)a2 image:(id)a3 imageSize:(double)a4;
- (id)addPlaceHolderViewTo:(id)a0 magrinView:(id)a1 height:(double)a2 isBottom:(BOOL)a3;
- (void)panelViewMasAdaptFuntional:(id)a0 superView:(id)a1 height:(double)a2;
- (void)panelContainerViewMasAdapt:(id)a0 superView:(id)a1;
- (void)panelViewUpdateLayout:(id)a0 superView:(id)a1 height:(double)a2;
- (double)panelViewWidthInSuperView:(id)a0;
- (BOOL)showPanelAnimated:(id)a0 completion:(id /* block */)a1;
- (void)performScaleAdaptionBlock:(id /* block */)a0;
- (BOOL)enableSmallScaleAdaption;
- (BOOL)performBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
