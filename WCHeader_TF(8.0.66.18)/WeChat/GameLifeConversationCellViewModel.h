@class MMBaseSessionCellData, GameLifeConversationCell, GameLifeConversation;

@interface GameLifeConversationCellViewModel : NSObject

@property (retain, nonatomic) MMBaseSessionCellData *cellData;
@property (weak, nonatomic) GameLifeConversationCell *cell;
@property (retain, nonatomic) GameLifeConversation *conversation;

+ (id)cellDataForConversation:(id)a0;

- (void)setupHistoryCellData:(id)a0;
- (void).cxx_destruct;

@end
