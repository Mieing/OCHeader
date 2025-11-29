@class UIView, NSString, AWEIMShapeView, AWEIMMentionParticipantCollectionViewCellSelectIcon, CAShapeLayer, UIImageView, AWEIMMentionParticipantSearchModel, AWEIMMessageConversation, UILabel, AWEIMConversationContext;

@interface AWEIMMentionParticipantCollectionViewCell : UICollectionViewCell

@property (copy, nonatomic) NSString *uniqueFlag;
@property (retain, nonatomic) UIView *avatarContentView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *avatarInternalView;
@property (retain, nonatomic) UIView *avatarBorderView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEIMShapeView *roleTagView;
@property (retain, nonatomic) UILabel *roleTagLabel;
@property (retain, nonatomic) UIView *onlineDotView;
@property (retain, nonatomic) AWEIMMentionParticipantCollectionViewCellSelectIcon *selectStateView;
@property (retain, nonatomic) UIImageView *selectedStateImageView;
@property (retain, nonatomic) CAShapeLayer *notchLayer;
@property (retain, nonatomic) UIImageView *avatarTagImageView;
@property (nonatomic) BOOL hasChatBackground;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (retain, nonatomic) AWEIMMentionParticipantSearchModel *searchModel;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) AWEIMConversationContext *conversationContext;

- (void)p_setupLayout;
- (void)updateSelected:(BOOL)a0;
- (void)updateAvatarAlpha;
- (void)refreshRoleTag;
- (BOOL)p_shouldDisplayGroupOwnerTagForUid:(id)a0;
- (void)p_updateTagViewWithTagType:(unsigned long long)a0;
- (void)updateSearchModel:(id)a0 conversation:(id)a1 conversationContext:(id)a2 selected:(BOOL)a3;
- (void)updateHasChatBackground:(BOOL)a0;
- (void)p_setupUI;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)refreshUI;
- (void)refreshActiveState;

@end
