@class UIColor, NSString, MMWebImageView, MMUILabel;

@interface WCFinderSDKFinderBindTopView : UIView

@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *actionWording;
@property (copy, nonatomic) NSString *scopeDesc;
@property (copy, nonatomic) NSString *appendDetailStr;
@property (retain, nonatomic) MMWebImageView *appIconImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *scopeLabel;
@property (retain, nonatomic) MMUILabel *detailLabel;
@property (nonatomic) double bottomPadding;
@property (retain, nonatomic) UIColor *imageViewBgColor;

- (id)initWithIconUrl:(id)a0 appName:(id)a1 actionWording:(id)a2 scopeDesc:(id)a3 appendDetailStr:(id)a4;
- (void)reloadWithIconUrl:(id)a0 appName:(id)a1;
- (void)initSubviews;
- (void)layoutSubviews;
- (double)layoutSubviewsAndCalculateHeight;
- (void).cxx_destruct;

@end
