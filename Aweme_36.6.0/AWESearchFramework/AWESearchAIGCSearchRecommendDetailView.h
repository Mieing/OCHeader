@class CAGradientLayer, UIControl, UIImageView, NSString, UILabel, UIView, NSDictionary;

@interface AWESearchAIGCSearchRecommendDetailView : UIView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CAGradientLayer *gradientLayer2;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIImageView *detailIcon;
@property (retain, nonatomic) UIControl *detailCtl;
@property (retain, nonatomic) UIView *maskBgView;
@property (copy, nonatomic) NSString *topId;
@property (copy, nonatomic) NSString *bottomId;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) id /* block */ detailClick;

- (void)themeChange;
- (void)addNotification;
- (void)handleDetailClick;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)createUI;

@end
