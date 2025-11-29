@class MMTimer, UIImageView, WCFinderFeedContentVM, UILabel, UIView, UIButton;
@protocol WCFinderDescTableViewCellDelegate;

@interface WCFinderDescTableViewCell : WCFinderTableViewCell <WCFinderFocusCellProtocol>

@property (weak, nonatomic) UIImageView *warningImageView;
@property (weak, nonatomic) UILabel *warningTitleLabel;
@property (weak, nonatomic) UILabel *tipsTitleLabel;
@property (weak, nonatomic) UIButton *continueButton;
@property (retain, nonatomic) MMTimer *countDownTimer;
@property (nonatomic) long long countDownTimes;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) UIView *tipsView;
@property (weak, nonatomic) id<WCFinderDescTableViewCellDelegate> delegate;

+ (BOOL)isRecommendTips:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)awakeFromNib;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)setUpUI;
- (void)updateWithContentVM:(id)a0;
- (void)startCountDownAction;
- (void)startTimmer;
- (void)countDownAction;
- (void)tipsClickActionSuccessful;
- (void)tipsClickActionFailure;
- (void)willMoveToWindow:(id)a0;
- (BOOL)shouldCaluculateAsFocusCell;
- (void).cxx_destruct;

@end
