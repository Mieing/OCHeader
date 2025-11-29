@class NSString, UIImageView, UILabel, UIButton;
@protocol AWEWebSecureBannerDelegate;

@interface AWEWebSecureBanner : UIView

@property (copy, nonatomic) NSString *bannerText;
@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (weak, nonatomic) id<AWEWebSecureBannerDelegate> delegate;

- (id)initWithBannerText:(id)a0;
- (void)__closeButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
