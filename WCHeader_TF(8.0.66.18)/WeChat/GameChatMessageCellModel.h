@class NSString, UIImage, GameLifeConversationCellDataSource, GameLifeConversation;

@interface GameChatMessageCellModel : GCBaseCellModel

@property (retain, nonatomic) NSString *bottomText;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) unsigned long long redPointCnt;
@property (nonatomic) BOOL showAsRedDot;
@property (nonatomic) int msgShowType;
@property (retain, nonatomic) GameLifeConversationCellDataSource *conversationCellDataSource;
@property (retain, nonatomic) GameLifeConversation *gameLifeConversation;
@property (nonatomic) long long conversationIndex;
@property (nonatomic) double lastMessageUpdateTime;
@property (nonatomic) double itemSpace;

- (id)cellReuseIdentifier;
- (Class)bindCellClass;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)openGameCenterMsgController:(int)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)updateCellAlpha:(id)a0;
- (void).cxx_destruct;

@end
