@class UIColor, NSArray, NSString, AWEAwemeModel;

@interface AWEDoubleColumnDislikeViewModel : NSObject <AWEDoubleColumnDislikeVMProtocol>

@property (copy, nonatomic) NSArray *collectionDataSource;
@property (nonatomic) double containerWidth;
@property (nonatomic) double containerHeight;
@property (nonatomic) double panelWidth;
@property (nonatomic) double panelHeight;
@property (nonatomic) double collectionViewWidth;
@property (nonatomic) double collectionViewHeight;
@property (nonatomic) double headerHeight;
@property (nonatomic) double cellWidth;
@property (nonatomic) double cellHeight;
@property (retain, nonatomic) UIColor *cellNormalBGColor;
@property (retain, nonatomic) UIColor *cellHighLightBGColor;
@property (nonatomic) long long index;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInset;
@property (nonatomic) long long cellLines;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (copy, nonatomic) id /* block */ feedbackBlock;
@property (copy, nonatomic) id /* block */ afterDismissFeedbackBlock;
@property (nonatomic) long long currentBigMode;
@property (nonatomic) BOOL isPad;
@property (nonatomic) BOOL enablePad;
@property (nonatomic) long long screenStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)referString;
+ (id)logScenePrefix;
+ (void)requestRevokeFeedbackVideo:(id)a0;
+ (void)trackRevokeFeedbackWithModel:(id)a0 andFeedbackInfo:(id)a1;
+ (void)revokeFeedbackWithModel:(id)a0 feedbackInfo:(id)a1;

- (void)sendDislikeRequest:(id)a0 extraInfo:(id)a1;
- (id)dislikeSectionData:(id)a0;
- (id)feedbackSectionData:(id)a0;
- (BOOL)calculatePanelHeightAfterConfig:(id)a0;
- (BOOL)useAdaptiveHeight:(id)a0;
- (id)getItemTitleForIndexPath:(id)a0;
- (void)feedbackWithIndexPath:(id)a0;
- (id)getSectionTitle:(long long)a0;
- (double)headerHeightForSection:(long long)a0;
- (double)cellWidthForIndexPath:(id)a0;
- (void)setupUIInfo;
- (void)configDataSource:(id)a0;
- (id)watchLaterSectionData:(id)a0;
- (BOOL)needRearrangeDislikePanelSection:(id)a0;
- (id)reArrangedDislikePanelSectionDataWithAwemeModel:(id)a0 dislikeSectionData:(id)a1 feedbackSection:(id)a2 watchLaterSectionData:(id)a3;
- (void)trackDislikeWithType:(id)a0;
- (void)afterDismissFeedbackWithIndexPath:(id)a0;
- (void)calculateDislikeHeightWith:(long long)a0 and:(long long)a1 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (long long)numberOfItemsInSection:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
