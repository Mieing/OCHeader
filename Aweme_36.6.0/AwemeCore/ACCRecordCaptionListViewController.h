@class CAGradientLayer, CADisplayLink, ACCRecordCaptionListPlaceHolderView, AWEBaseListFlowLayout;

@interface ACCRecordCaptionListViewController : AWEBaseListViewController

@property (retain, nonatomic) ACCRecordCaptionListPlaceHolderView *placeHolderView;
@property (retain, nonatomic) AWEBaseListFlowLayout *layout;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double lastTargetContentOffset;
@property (nonatomic) BOOL scrollEnabled;
@property (retain, nonatomic) CAGradientLayer *maskGradientLayer;
@property (nonatomic) BOOL topMaskIsShowing;
@property (nonatomic) BOOL bottomMaskIsShowing;

- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (id)emptySectionsPlaceholderView;
- (void)bindViewModel;
- (void)onDisplayRefresh;
- (void)updateScrollEnabled:(BOOL)a0;
- (void)fontSizeDidChange;
- (void)onChangeMusic:(id)a0;
- (void)onChangeStartTimeMS:(double)a0 clipDurationMS:(double)a1;
- (void)updateForceFullySelected:(BOOL)a0;
- (void)onTimeUpdate;
- (void)updateMaskWithNeedTop:(BOOL)a0 needBottom:(BOOL)a1;
- (void)onSeek;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)start;
- (void)setupDisplayLink;
- (void)viewDidLoad;
- (void)dealloc;
- (void)end;
- (void)updateMask;
- (void)buildView;
- (void)setupCollectionView:(id)a0;

@end
