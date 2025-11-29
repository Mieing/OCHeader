@class NSString, ACCPicTemplatePanelThumbnailView, ACCPicTemplatePanelCategoryView, ACCPicTemplatePanelLoadingView, ACCPicTemplatePanelDataManager;
@protocol ACCPicTemplatePanelContainerViewDelegate;

@interface ACCPicTemplatePanelContainerView : UIView <ACCPicTemplatePanelCategoryViewDelegate, ACCPicTemplatePanelThumbnailViewDelegate>

@property (retain, nonatomic) ACCPicTemplatePanelCategoryView *categoryView;
@property (retain, nonatomic) ACCPicTemplatePanelThumbnailView *thumbnailView;
@property (retain, nonatomic) ACCPicTemplatePanelLoadingView *loadingView;
@property (retain, nonatomic) ACCPicTemplatePanelDataManager *dataManager;
@property (nonatomic) double startShowTimeStamp;
@property (nonatomic) BOOL hasShowOnce;
@property (weak, nonatomic) id<ACCPicTemplatePanelContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didRemoveTemplate;
- (void)categoryViewDidSelectedCategoryAtIndexPath:(id)a0;
- (void)updateIndexWhenProjectDidChanged;
- (void)reloadTemplateView;
- (void)reloadVisibleTemplatesSelectedStatus;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataManager:(id)a1;
- (void)landingToInitialTemplate;
- (void)thumbnailViewDidScrollToCategoryAtIndexPath:(id)a0;
- (void)thumbnailViewDidSelectedTemplateAtIndexPath:(id)a0;
- (void)thumbnailViewWillDisplayTemplateAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (void)fetchData;
- (void)setupUI;

@end
