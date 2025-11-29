@class MMHeadImageView, MMLiveMsgTipsExpandViewModel, UIView, MMUIButton, MMUILabel;
@protocol MMLiveMsgTipsExpandViewCellDelegate;

@interface MMLiveMsgTipsExpandViewCell : MMTableViewCell

@property (weak, nonatomic) id<MMLiveMsgTipsExpandViewCellDelegate> delegate;
@property (retain, nonatomic) UIView *bubbleView;
@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) MMUILabel *liveNameLabel;
@property (retain, nonatomic) MMUILabel *anchorNameLabel;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) UIView *seperatorLine;
@property (retain, nonatomic) MMLiveMsgTipsExpandViewModel *viewModel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)layoutSubviews;
- (void)onCloseButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
