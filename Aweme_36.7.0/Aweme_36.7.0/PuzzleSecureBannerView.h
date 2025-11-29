@class NSString, UIImageView, UILabel, UIButton;

@interface PuzzleSecureBannerView : UIView

@property (copy, nonatomic) NSString *bannerText;
@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) id /* block */ closeHandler;

- (id)initWithBannerText:(id)a0;
- (void)__closeButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
