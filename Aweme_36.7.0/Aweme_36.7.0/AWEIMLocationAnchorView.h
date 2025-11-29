@class NSString, UIImageView, UILabel, UIView;

@interface AWEIMLocationAnchorView : UIView <IESIMLocationAnchorViewProtocol>

@property (retain, nonatomic) UIImageView *iconBackgroundImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *titleBackgroundView;
@property (retain, nonatomic) UIImageView *titleIconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateIconWithUser:(id)a0 showLargeAvatar:(BOOL)a1;
- (void)updateTitle:(id)a0 titleFontSize:(double)a1;
- (void)triggerShowAnimation;
- (void)p_setupIconUIWithConfig:(id)a0;
- (void)p_setupTitleUIWithConfig:(id)a0;
- (void)updateUIHiddenWithStyle:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)clearContent;

@end
