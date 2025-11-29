@class AFDUserListGridPanelCellBubble, AFDUserListGridPanelCellLayoutModel, AFDUserListGridPanelCellAvatarView, AFDUserListGridPanelCellModel, AFDUserListGridPanelCellTextView;
@protocol AFDUserListGridPanelCellDelegate;

@interface AFDUserListGridPanelCell : UICollectionViewCell

@property (retain, nonatomic) AFDUserListGridPanelCellBubble *bubble;
@property (retain, nonatomic) AFDUserListGridPanelCellAvatarView *avatarView;
@property (retain, nonatomic) AFDUserListGridPanelCellTextView *textView;
@property (retain, nonatomic) AFDUserListGridPanelCellModel *model;
@property (retain, nonatomic) AFDUserListGridPanelCellLayoutModel *layoutModel;
@property (weak, nonatomic) id<AFDUserListGridPanelCellDelegate> delegate;

- (void)updateAvatarWithModel:(id)a0;
- (void)didTapSubtitle;
- (id)buildLayoutModel;
- (void)initializeLayout;
- (void)updateTextWithModel:(id)a0;
- (void)updateBubbleWithModel:(id)a0;
- (void)didTapBubble;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applyLayoutAttributes:(id)a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
