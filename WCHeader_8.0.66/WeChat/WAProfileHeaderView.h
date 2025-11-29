@class MMUILabel, UIButton, WAContact, MMWebImageView, YYLabel;
@protocol WAProfileHeaderViewDelegate;

@interface WAProfileHeaderView : UIView

@property (retain, nonatomic) MMWebImageView *avatarView;
@property (retain, nonatomic) YYLabel *nameLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIButton *enterButton;
@property (retain, nonatomic) UIButton *serviceButton;
@property (weak, nonatomic) id<WAProfileHeaderViewDelegate> delegate;
@property (retain, nonatomic) WAContact *contact;
@property (nonatomic) BOOL showServiceButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)onHighlightBorder:(id)a0;
- (void)onUnhighlightBorder:(id)a0;
- (void)updateContact:(id)a0;
- (void)layoutIfNeeded;
- (void).cxx_destruct;

@end
