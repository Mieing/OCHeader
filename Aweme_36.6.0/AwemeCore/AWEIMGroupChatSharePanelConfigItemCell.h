@class AWEIMGroupChatSharePanelConfigItemViewModel, UIImageView, UILabel, UIView;
@protocol AWEIMGroupChatSharePanelConfigItemCellDelegate, IESIMSettingSwitchProtocol;

@interface AWEIMGroupChatSharePanelConfigItemCell : UICollectionViewCell

@property (readonly, nonatomic) AWEIMGroupChatSharePanelConfigItemViewModel *model;
@property (readonly, weak, nonatomic) id<AWEIMGroupChatSharePanelConfigItemCellDelegate> delegate;
@property (readonly, nonatomic) UIImageView *itemIconView;
@property (readonly, nonatomic) UILabel *itemLabelLabel;
@property (readonly, nonatomic) UIView<IESIMSettingSwitchProtocol> *itemSettingSwitch;
@property (readonly, nonatomic) UIImageView *arrowImageView;
@property (readonly, nonatomic) UIView *bottomLineView;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (void)__configGenericUserInterface;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
