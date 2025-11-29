@class NSString, AWEVideoPublishViewModel;
@protocol ACCSideslipPropViewContainerProtocol, IESServiceProvider;

@interface ACCSideslipPropPanelEditorUIConfigImpl : NSObject <ACCSideslipPropPanelUIConfigService>

@property (weak, nonatomic) id<IESServiceProvider> sideslipServiceProvider;
@property (weak, nonatomic) id<ACCSideslipPropViewContainerProtocol> viewContainer;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableApplyPropWhileSliping;
- (void)setupBaseView;
- (void)layoutBaseView;
- (struct CGSize { double x0; double x1; })layoutItemSize;
- (double)layoutIndicatorItemRadius;
- (BOOL)enableLoadMoreButton;
- (BOOL)enableEditorLoadMoreButton;
- (BOOL)enableEditorFavoriteButton;
- (id)moreIconImage;
- (struct CGSize { double x0; double x1; })moreIconSize;
- (double)moreIconTopMargin;
- (double)moreIconBottomMargin;
- (double)moreIconCornerRadius;
- (BOOL)moreIconDisableIconCornerRadius;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (long long)leftPreloadCount;
- (long long)rightPreloadCount;
- (void).cxx_destruct;

@end
