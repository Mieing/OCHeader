@class MMBadgeView, EmoticonStoreReportInfo, UIColor;
@protocol DesignerPortfolioCellDelegate;

@interface DesignerPortfolioCell : MMStoreEmotionBaseAllCell

@property (retain, nonatomic) MMBadgeView *reddotImageView;
@property (nonatomic) BOOL showDownloadView;
@property (weak, nonatomic) id<DesignerPortfolioCellDelegate> delegate;
@property (retain, nonatomic) EmoticonStoreReportInfo *reportInfo;
@property (retain, nonatomic) UIColor *overridingColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)downloadLogicConfig;
- (BOOL)layoutStaticBtnWidth;
- (void)updateStoreItem:(id)a0;
- (void)loadPidReddot;
- (BOOL)isRewardEnabled;
- (void)clearReddotIfNeeded;
- (void)handleReward;
- (void)onTapGetEmoticonBtnFor:(unsigned long long)a0;
- (double)downloadViewMaxWidth;
- (void).cxx_destruct;

@end
