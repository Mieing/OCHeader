@class UIImageView, MMUILabel, NSString;

@interface MMFinderLiveMemberTipsBubble : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) MMUILabel *tipLabel;
@property (retain, nonatomic) NSString *tips;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL superfanIcon;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly, nonatomic) BOOL isShow;

- (id)initWithTips:(id)a0 duration:(unsigned int)a1 superfanIcon:(BOOL)a2;
- (void)initUI;
- (void)createTipLabel;
- (void)createIconView;
- (void)showWithAnimated:(BOOL)a0;
- (void)dismissWithAnimated:(BOOL)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void).cxx_destruct;

@end
