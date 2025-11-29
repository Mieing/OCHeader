@class NSDictionary, NSString, UIImageView, AWEGeneralSearchModel, UILabel, NSMutableArray, AWEWordSourceModel;
@protocol AWEModernFeedCellContext;

@interface AWEGeneralWaterfallRecommendWordsCellController : UIViewController <AWESearchCachalotCardViewProtocol, AWEModernFeedCellControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEGeneralSearchModel *model;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *closeIcon;
@property (retain, nonatomic) NSMutableArray *wordButtonList;
@property (retain, nonatomic) AWEWordSourceModel *recommWordsModel;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *presearchID;
@property (retain, nonatomic) NSString *lastSsearchGroupId;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (retain, nonatomic) Class cardClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (long long)enableStyleOpt;
+ (double)wordFontSize;
+ (double)closeBtnSize;
+ (double)closeBtnRightOffset;
+ (double)wordToTitleMarginTop;
+ (long long)itemCountWithModel:(id)a0;
+ (double)wordCorners;
+ (double)titleHeight;
+ (double)cellHeight;
+ (double)titleFontSize;

- (void)closeWithAnimated:(BOOL)a0;
- (void)didEndShowing;
- (void)didStartShowing;
- (id)buttonBGColor;
- (BOOL)isHideWords;
- (BOOL)isFeedDoubleColumnLayout;
- (void)trendingShowTrackWithMasked:(BOOL)a0;
- (void)updateLayoutAfterItemUpdate;
- (void)closeIconTapped;
- (void)wordButtonTapped:(id)a0;
- (void)trendingWordsShowWithMasked:(BOOL)a0 wordsPosition:(long long)a1;
- (void).cxx_destruct;
- (long long)itemCount;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (id)componentView;
- (void)setupUI;
- (id)buttonTitleColor;
- (void)updateWithViewModel:(id)a0;
- (void)updateWithModel:(id)a0;

@end
