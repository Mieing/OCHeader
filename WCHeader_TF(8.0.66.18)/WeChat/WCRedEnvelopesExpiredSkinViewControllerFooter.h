@class MMUIActivityIndicatorView, NSString, UILabel, UIView, MMUILabel;

@interface WCRedEnvelopesExpiredSkinViewControllerFooter : UICollectionReusableView

@property (retain, nonatomic) UIView *lineViewLeft;
@property (retain, nonatomic) UIView *lineViewRight;
@property (retain, nonatomic) UILabel *limitedWordingLabel;
@property (retain, nonatomic) UIView *limitedWordingView;
@property (retain, nonatomic) MMUILabel *loadingHintLabel;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) MMUIActivityIndicatorView *indicatorView;
@property (nonatomic) int loadingHintTextSize;
@property (nonatomic) int indicatorViewSize;
@property (nonatomic) int loadingHintLabelMarginLeft;
@property (copy, nonatomic) NSString *limitedWording;

- (void)initValue;
- (void)layoutSubviews;
- (void)setupLimitedWording:(id)a0;
- (void)updateLoadingView;
- (void)updateLimitedWordingView;
- (void).cxx_destruct;

@end
