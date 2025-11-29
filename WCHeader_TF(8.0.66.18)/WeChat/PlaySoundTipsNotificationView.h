@class UIImageView, MMUILabel, UIButton;

@interface PlaySoundTipsNotificationView : MMNotificationView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) MMUILabel *textLabel;
@property (retain, nonatomic) MMUILabel *detailTextLabel;
@property (retain, nonatomic) UIButton *playSoundButton;
@property (copy, nonatomic) id /* block */ onClickPlaySoundButton;

- (void)initContentView;
- (void)sizeToFitWidth:(double)a0;
- (void)configSDKReport;
- (void)clickPlaySoundButton;
- (void).cxx_destruct;

@end
