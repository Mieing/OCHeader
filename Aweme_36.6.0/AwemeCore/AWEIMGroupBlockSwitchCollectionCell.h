@class AWEIMMessageConversation, NSString, UILabel, UIView;
@protocol IESIMSettingSwitchProtocol, AWEIMGroupBlockCollectionCellDelegate;

@interface AWEIMGroupBlockSwitchCollectionCell : AWEIMGroupCornerableCollectionCell <AWEIMGroupSpeakPermissionCellProtocol>

@property (retain, nonatomic) UIView<IESIMSettingSwitchProtocol> *aSwitch;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) long long type;
@property (weak, nonatomic) id<AWEIMGroupBlockCollectionCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)__setupUI;
- (void)switchControlDidChanged:(id)a0;
- (void)configWithConversation:(id)a0 type:(long long)a1;
- (void)renderWithCellModel:(id)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)accessibilityActivate;

@end
