@class UIImageView, NSTimer, NSDictionary, YYLabel;

@interface AWEFeedRepostBubbleView : UIView

@property (retain, nonatomic) UIImageView *bubbleImageView;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) NSTimer *dismissTimer;
@property (retain, nonatomic) NSDictionary *logDict;

+ (BOOL)requiresConstraintBasedLayout;

- (void)tapBubbleView:(id)a0;
- (BOOL)isPure3xEmoji:(id)a0;
- (void)configWithContent:(id)a0;
- (void)dismissAnimatied:(BOOL)a0;
- (void)showOnView:(id)a0 content:(id)a1 dismissTime:(double)a2 logDict:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
