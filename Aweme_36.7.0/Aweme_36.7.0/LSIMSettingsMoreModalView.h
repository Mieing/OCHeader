@class LSIMCommonModalViewController, UIImageView, UILabel, LSIMBizConversation, UIView;

@interface LSIMSettingsMoreModalView : UIView

@property (retain, nonatomic) LSIMBizConversation *conversation;
@property (copy, nonatomic) id /* block */ leaveBlock;
@property (retain, nonatomic) UILabel *groupNameLabel;
@property (retain, nonatomic) UILabel *groupCountLabel;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *leaveLabel;
@property (retain, nonatomic) UIImageView *minusImageView;
@property (weak, nonatomic) LSIMCommonModalViewController *modalVC;

+ (long long)modalViewHeight;

- (void)initView;
- (void)closeImageViewTapped;
- (id)initWithConversation:(id)a0 leaveClickBlock:(id /* block */)a1;
- (void)leavelGroupTapped;
- (void).cxx_destruct;
- (id)contentView;

@end
