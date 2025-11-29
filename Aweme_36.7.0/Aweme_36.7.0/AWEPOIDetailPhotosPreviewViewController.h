@class AWEPOIDetailPhotosPreviewUploaderInfoView, NSString, AWEPOIAlbumCategoryInfoModel, AWEUIButton, UILabel, UIView, NSDictionary;

@interface AWEPOIDetailPhotosPreviewViewController : AWEPOIDetailPhotosPreviewBaseViewController <AWEPhotosPreviewFadeOutTransitionContextProvider, AWEZoomTransitionInnerContextProvider>

@property (retain, nonatomic) UIView *pageContainer;
@property (retain, nonatomic) UILabel *currentPageLabel;
@property (retain, nonatomic) UILabel *totalPageLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEUIButton *uploadButton;
@property (nonatomic) BOOL shouldShowUploadButton;
@property (nonatomic) BOOL shouldShowCloseButton;
@property (nonatomic) BOOL shouldShowReportButton;
@property (copy, nonatomic) NSString *reportSchema;
@property (copy, nonatomic) id /* block */ gotoUploadBlock;
@property (retain, nonatomic) AWEPOIDetailPhotosPreviewUploaderInfoView *userInfoView;
@property (retain, nonatomic) AWEPOIAlbumCategoryInfoModel *model;
@property (nonatomic) BOOL isLoading;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) long long actualTotalCount;
@property (copy, nonatomic) id /* block */ loadMore;
@property (readonly, nonatomic) NSDictionary *zoomTransitionContext;

- (unsigned long long)fadeOutTransitionAllowedTriggerDirection;
- (unsigned long long)zoomTransitionAllowedTriggerDirection;
- (BOOL)zoomTransitionWantsRemoveSpringAnimation;
- (id)zoomTransitionEndView;
- (long long)zoomTransitionItemOffset;
- (void)p_setupCloseButton;
- (void)clickCloseButton;
- (void)trackClickReportButton;
- (void)trackShowReportButton;
- (void)loadMorePhotos;
- (void)updateProgressWithPage:(long long)a0 total:(long long)a1 photo:(id)a2;
- (void)willDisplayCellWithPhoto:(id)a0;
- (void)p_setupTopArea;
- (void)p_setupBottomArea;
- (void)p_setupReportButton;
- (void)p_setupPageContainer;
- (void)jumpToReportErrorPage;
- (id)getPreviousPage;
- (id)reportErrorPageSchemaParams;
- (BOOL)isFromAlbumPage;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (id)initWithConfiguration:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
