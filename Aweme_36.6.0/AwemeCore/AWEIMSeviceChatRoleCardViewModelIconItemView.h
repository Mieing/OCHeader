@class UIImageView, UILabel, AWEIMSeviceChatRoleCardViewModelIconItem;

@interface AWEIMSeviceChatRoleCardViewModelIconItemView : UIButton

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) AWEIMSeviceChatRoleCardViewModelIconItem *item;

- (void)renderModel:(id)a0;
- (void)updateLabelColor;
- (void)updateThemeUI;
- (void)updateIconUrlImage;
- (void).cxx_destruct;
- (id)init;

@end
