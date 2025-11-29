@class UIViewController, NSString, NSDictionary, AWEPOIAlbumSelectedStatus, AWEPOIAlbumPageViewItem, AWEPOIAlbumDataProcessor, NSObject;
@protocol AWEPOIAlbumLabelChangeProtocol, IESLLFusePOIDetailNGPageContextProtocol;

@interface AWEPOIAlbumPageViewWithSingleItem : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) NSDictionary *logParams;
@property (retain, nonatomic) AWEPOIAlbumPageViewItem *album;
@property (nonatomic) long long labelStatus;
@property (nonatomic) double lastContentOffsetY;
@property (nonatomic) double expandStatusUpOffset;
@property (nonatomic) double collapseStatusDownOffset;
@property (nonatomic) BOOL fixedLabelChange;
@property (retain, nonatomic) AWEPOIAlbumSelectedStatus *selectedStatus;
@property (retain, nonatomic) AWEPOIAlbumDataProcessor *dataProcessor;
@property (weak, nonatomic) id<IESLLFusePOIDetailNGPageContextProtocol> context;
@property (weak, nonatomic) NSObject<AWEPOIAlbumLabelChangeProtocol> *albumLabelChangeDelegate;
@property (weak, nonatomic) UIViewController *vc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackShowPOIPicOperation;
- (void)loadDataWithModel:(id)a0 extraParam:(id)a1 dataProcessor:(id)a2;
- (void)loadDataWithModel:(id)a0 extraParam:(id)a1 dataProcessor:(id)a2 labelStatus:(long long)a3 fixedLabelChange:(BOOL)a4;
- (void)forbiddenScrollViewPullDownBounce:(id)a0;
- (void)judgeShouldShowShadow:(id)a0;
- (void)changeToCollapsedStatus;
- (void)changeToExpandStatus;
- (void)switchToAlumPageItem:(long long)a0;
- (void)updateTableInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)setupUI;

@end
