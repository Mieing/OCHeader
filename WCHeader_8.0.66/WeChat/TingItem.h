@class MMListenClassicMusicInfo, NSString, MMListenChatRoomInfo, MMListenItem, TingPlayItem, TingPlayContext;

@interface TingItem : WXPBGeneratedMessage

@property (retain, nonatomic) MMListenItem *listenItem;
@property (retain, nonatomic) NSString *clientId;
@property (retain, nonatomic) TingPlayItem *playItem;
@property (retain, nonatomic) TingPlayContext *context;
@property (retain, nonatomic) NSString *extInfo;
@property (nonatomic) unsigned int dataSource;
@property (retain, nonatomic) MMListenChatRoomInfo *chatroomInfo;
@property (retain, nonatomic) NSString *listenUuid;
@property (retain, nonatomic) MMListenClassicMusicInfo *classicMusicInfo;

+ (id)tingItemFromRaw:(id)a0;
+ (id)parseFromWebItem:(id)a0;
+ (void)initialize;

- (void)setClassicMusicInfo:(id)a0;
- (id)classicMusicInfo;
- (void)setListenUuid:(id)a0;
- (id)listenUuid;
- (void)setChatroomInfo:(id)a0;
- (id)chatroomInfo;
- (void)setDataSource:(unsigned int)a0;
- (unsigned int)dataSource;
- (void)setExtInfo:(id)a0;
- (id)extInfo;
- (void)setContext:(id)a0;
- (id)context;
- (void)setPlayItem:(id)a0;
- (id)playItem;
- (void)setClientId:(id)a0;
- (id)clientId;
- (void)setListenItem:(id)a0;
- (id)listenItem;
- (BOOL)isPlaying;
- (id)toShareItem;
- (id)toChatMessageWithCoverImageData:(id)a0;
- (id)toWCUpLoadTaskWithCoverImageData:(id)a0;
- (id)toFavItemWithCoverImageData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isSameListenItem:(id)a0;
- (id)debugDescription;
- (BOOL)isSupportOpenAuthorPage;
- (BOOL)isSupportOpenDetailPage;
- (BOOL)isValid;
- (id)iconUrl;
- (id)iconRemoteOrLocalUrl;
- (id)title;
- (id)subtitle;
- (id)authorName;
- (id)audioUrl;
- (id)webUrl;
- (int)durationMs;
- (id)uuid;
- (void)updateWithListenItem:(id)a0;
- (void)switchToBackupItem;
- (id)copy;
- (id)webItem;

@end
