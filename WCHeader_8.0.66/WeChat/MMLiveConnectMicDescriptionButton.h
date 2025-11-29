@class UIImageView, UILabel, WCLiveBlurButton, CALayer;

@interface MMLiveConnectMicDescriptionButton : UIView

@property (nonatomic) unsigned long long connectMicState;
@property (retain, nonatomic) WCLiveBlurButton *connectMicButton;
@property (retain, nonatomic) UIImageView *micIcon;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *closeIcon;
@property (retain, nonatomic) CALayer *redDotLayer;
@property (nonatomic) BOOL showRedDot;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (nonatomic) BOOL isAnchor;

- (void)updateViews;
- (void).cxx_destruct;

@end
