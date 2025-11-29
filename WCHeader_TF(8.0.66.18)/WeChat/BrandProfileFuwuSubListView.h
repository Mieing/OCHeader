@class NSMutableArray, UIView, UILabel, BrandProfileFuwuInfo;

@interface BrandProfileFuwuSubListView : BrandProfileFuwuBaseView

@property (retain, nonatomic) BrandProfileFuwuInfo *fuwuInfo;
@property (retain, nonatomic) UIView *topDividingView;
@property (retain, nonatomic) UILabel *groupLabel;
@property (retain, nonatomic) NSMutableArray *showingFuwuButtonList;
@property (retain, nonatomic) NSMutableArray *allFuwuButtonList;
@property (nonatomic) double cachedFuwuViewHeight;

- (id)init;
- (void)setupSubviews;
- (void)layoutSubviews;
- (double)calcuteFuwuViewHeight;
- (double)layoutFuwuViewSubviews;
- (void)updateFuwuInfo:(id)a0;
- (void)onFuwuButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
