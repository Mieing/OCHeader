@class MMFinderLiveLotteryInfo, UIImageView, UIView, MMUILabel;

@interface LotteryWinnerListHeaderView : UIView

@property (retain, nonatomic) UIView *lotteryIconView;
@property (retain, nonatomic) UIImageView *lotteryIconImg;
@property (retain, nonatomic) MMUILabel *lotteryNameLabel;
@property (retain, nonatomic) MMUILabel *lotteryDescriptionTitleLabel;
@property (retain, nonatomic) MMUILabel *lotteryActionTitleLabel;
@property (retain, nonatomic) MMUILabel *lotteryWinTimeTitleLabel;
@property (retain, nonatomic) UIView *sepelateLine;
@property (retain, nonatomic) MMFinderLiveLotteryInfo *lotteryInfo;

+ (double)headerHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutLotteryIcon;
- (void)layoutLotteryNameLabel;
- (void)layoutLotteryDescriptionTitleLabel;
- (void)layoutLotteryActionTitleLabel;
- (void)layoutLotteryWinTimeTitleLabel;
- (void)layoutSeparateLine;
- (void)updateLotteryInfo:(id)a0;
- (id)innerGetLotteryAttendTypeStr;
- (void).cxx_destruct;

@end
