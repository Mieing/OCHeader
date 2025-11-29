@class NSString, UIImageView, MMMenuItem, UILabel;
@protocol MMMenuItemViewDelegate;

@interface MMMenuItemView : UIButton <MMMenuItemProtocol>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *menuSubtitleLabel;
@property (retain, nonatomic) MMMenuItem *menuItem;
@property (nonatomic) BOOL isShow;
@property (nonatomic) double leftPadding;
@property (nonatomic) double rightPadding;
@property (weak, nonatomic) id<MMMenuItemViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithItem:(id)a0;
- (void)updateWithStyle:(long long)a0;
- (void)layoutSubviews;
- (void)onItemButtonClick:(id)a0;
- (void)onMenuItemViewDidShow;
- (void)onMenuItemAnimatorChange:(id)a0;
- (id)getIconImageView;
- (void).cxx_destruct;

@end
