@class NSArray, UILabel, UIView;

@interface AWEIMMessageInteractiveUserListHeaderView : UIView

@property (nonatomic) BOOL isMultiType;
@property (copy, nonatomic) NSArray *titleArray;
@property (retain, nonatomic) UIView *selectLine;
@property (nonatomic) long long selectIndex;
@property (retain, nonatomic) UIView *barView;
@property (retain, nonatomic) UILabel *leftTitleLabel;
@property (retain, nonatomic) UILabel *rightTitleLabel;
@property (retain, nonatomic) UIView *bottomLineView;
@property (copy, nonatomic) id /* block */ clickIndexBlock;

- (void)changeToIndex:(long long)a0;
- (id)initWithTitleArray:(id)a0;
- (id)__titleLable;
- (void)titleLableClick:(id)a0;
- (void)updateSelectLineOffset:(double)a0;
- (void).cxx_destruct;
- (double)screenWidth;
- (void)layoutSubviews;

@end
