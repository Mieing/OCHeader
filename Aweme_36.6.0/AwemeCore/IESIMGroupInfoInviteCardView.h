@class UIImageView, UILabel, UIView, AWEIMRefreshImageView;

@interface IESIMGroupInfoInviteCardView : UIView

@property (retain, nonatomic) UIImageView *rightIconView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *sourceLabel;
@property (retain, nonatomic) UIView *sepline;
@property (retain, nonatomic) UILabel *groupNameLabel;
@property (retain, nonatomic) UILabel *groupCountLabel;
@property (retain, nonatomic) AWEIMRefreshImageView *groupAvatarView;
@property (copy, nonatomic) id /* block */ clickInviteCardBlock;

- (void)p_layout;
- (void)handleContentViewTap:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
