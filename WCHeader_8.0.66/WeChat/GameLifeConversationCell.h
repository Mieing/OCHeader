@class GameLifeConversationCellViewModel;
@protocol GameLifeConversationCellDelegate;

@interface GameLifeConversationCell : MMBaseSessionTableViewCell

@property (retain, nonatomic) GameLifeConversationCellViewModel *viewModel;
@property (weak, nonatomic) id<GameLifeConversationCellDelegate> gameLifeDelegate;

- (id)initWithLayoutParam:(id)a0 reuseIdentifier:(id)a1;
- (void)updateWithSessionCellData:(id)a0;
- (void)layoutSubviews;
- (void)updateMsgLabelWithSessionCellData:(id)a0;
- (void)handlePan:(id)a0;
- (void).cxx_destruct;

@end
