@class UILabel, UIImageView, UIView;

@interface WXGRoamChooseRangeViewCell : UITableViewCell

@property (retain, nonatomic) UIView *cardView;
@property (retain, nonatomic) UILabel *topLabel;
@property (retain, nonatomic) UIView *rangeView;
@property (retain, nonatomic) UIImageView *rangeArrow;
@property (retain, nonatomic) UILabel *rangeTextLabel;
@property (retain, nonatomic) UIView *excludeView;
@property (retain, nonatomic) UIView *timeFilterView;
@property (retain, nonatomic) UILabel *excludeTitle;
@property (retain, nonatomic) UILabel *excludeLabel;
@property (retain, nonatomic) UIImageView *excludeArror;
@property (retain, nonatomic) UILabel *timeFilterLabel;
@property (copy, nonatomic) id /* block */ reloadBlock;
@property (retain, nonatomic) UIView *selectExtraView;
@property (retain, nonatomic) UIImageView *selectExtraArrow;
@property (nonatomic) BOOL isShowExtra;
@property (nonatomic) double cellHeight;
@property (nonatomic) double cellWidth;
@property (nonatomic) unsigned long long cellIndex;

- (void)setWidth:(double)a0;
- (void)setupViews;
- (void)updateIsShowExtra;
- (void)updateExcludeView;
- (void)updateTimeView;
- (void)updateRangeView;
- (void)onDeleteCell;
- (void).cxx_destruct;

@end
