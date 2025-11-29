@class NSString, UIImageView, MMUIActivityIndicatorView, MMImageView, LocationMessageViewModel, MMUILabel;

@interface LocationMessageCellView : CommonMessageCellView <ILocationMgrExt, ILocationThumbMgrExt> {
    unsigned long long m_geotag;
    MMUILabel *m_titleLabel;
    MMUILabel *m_descLabel;
    UIImageView *m_contentBgImageView;
    MMImageView *m_imageView;
    MMUIActivityIndicatorView *m_imageLoadingView;
    MMUIActivityIndicatorView *m_poiLoadingView;
    BOOL m_enterBackground;
}

@property (readonly, nonatomic) LocationMessageViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)dealloc;
- (void)prepareForReuse;
- (BOOL)canBeReused;
- (void)layoutContentView;
- (void)initTitleLabel;
- (void)initContentBgImageView;
- (void)initLocationThumbImageView;
- (void)setLocationThumbImage;
- (id)maskLayerWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void)createNewRequest;
- (void)onDidFindAddress:(id)a0 forTag:(unsigned long long)a1;
- (void)OnUpdateLocationThumb:(id)a0 Task:(id)a1;
- (void)OnLocationThumbMgrError:(int)a0 Task:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void).cxx_destruct;

@end
