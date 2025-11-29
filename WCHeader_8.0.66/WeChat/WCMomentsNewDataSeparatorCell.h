@class WCMomentsNewDataSeparatorViewModel, MMUILabel, WCMomentsFinderRecommendationButton;
@protocol WCMomentsNewDataSeparatorCellDelegate;

@interface WCMomentsNewDataSeparatorCell : MMTableViewCell {
    struct CGSize { double width; double height; } _lastLayoutedSize;
}

@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (retain, nonatomic) WCMomentsFinderRecommendationButton *finderRecommendationButton;
@property (weak, nonatomic) id<WCMomentsNewDataSeparatorCellDelegate> delegate;
@property (retain, nonatomic) WCMomentsNewDataSeparatorViewModel *viewModel;

+ (double)heightForWidth:(double)a0 viewModel:(id)a1;
+ (id)createTipsLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateSubviews;
- (void)reloadTipsLabel;
- (void)reloadFinderRecommendationButton;
- (void)finderRecommendationButtonDidClick:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
