@class UIColor, FinderLiveMilestoneLotteryInfo_AttendInfo_Choice, UIImageView, UILabel, UIView;

@interface MMFinderLiveMilestoneLotteryDetailQuestionOptionView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIImageView *checkMarkImageView;
@property (retain, nonatomic) UIView *progressView;
@property (retain, nonatomic) UIColor *lightColor;
@property (retain, nonatomic) UIColor *heavyColor;
@property (retain, nonatomic) UIColor *selectedTextColor;
@property (retain, nonatomic) UIColor *normalTextColor;
@property (retain, nonatomic) FinderLiveMilestoneLotteryInfo_AttendInfo_Choice *choice;
@property (nonatomic) unsigned long long maxChoiceCount;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL showCount;
@property (copy, nonatomic) id /* block */ onTapped;

- (id)initWithLightColor:(id)a0 heavyColor:(id)a1 selectedTextColor:(id)a2 normalTextColor:(id)a3;
- (void)commonInit;
- (void)onTapped:(id)a0;
- (void)layoutSubviews;
- (void)onChoiceUpdated;
- (void)updateColorAndLayout;
- (void).cxx_destruct;

@end
