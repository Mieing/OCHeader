@class UIImageView, NSString, UIImage;
@protocol AWEEcomScreenShotPanelButtonDelegate;

@interface AWEEcomScreenShotPanelButton : UIButton

@property (nonatomic) unsigned long long screenShotPanelButtonType;
@property (retain, nonatomic) UIImageView *originalImageView;
@property (retain, nonatomic) UIImageView *animatedImageView;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *searchEntrance;
@property (retain, nonatomic) UIImage *screenShotImage;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *ecomSceneID;
@property (weak, nonatomic) id<AWEEcomScreenShotPanelButtonDelegate> delegate;

- (void)shareAction;
- (void)configUI;
- (void)feedbackAction;
- (void)identifyAction;
- (void)triggerAnimationForShareButton;
- (void).cxx_destruct;
- (id)initWithButtonType:(unsigned long long)a0;

@end
