@class UIImageView, UILabel, UIView;

@interface AWEIMSwitchCFBubbleColorSingleView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *peerView;
@property (retain, nonatomic) UIView *ownView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *descLabel;

- (void)p_addSubviews;
- (void)p_setupConstraints;
- (void)p_setupUIWithConfig:(id)a0;
- (void)updateWithSelected:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
