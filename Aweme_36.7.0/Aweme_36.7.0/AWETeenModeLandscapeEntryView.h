@class UIImageView, UILabel;

@interface AWETeenModeLandscapeEntryView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (nonatomic) BOOL isMonitoring;

- (void)updateUIForStyleDefault;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)dealloc;
- (void)initUI;

@end
