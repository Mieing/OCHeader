@class NSString, MMListenSimplePlaylistInfo;

@interface TingListSourceRefreshContext : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *positionListenId;
@property (retain, nonatomic) MMListenSimplePlaylistInfo *simplePlaylistInfo;
@property (retain, nonatomic) NSString *positionListenUuid;
@property (nonatomic) BOOL positionChatroomPlayingItem;
@property (nonatomic) BOOL forceRefresh;
@property (nonatomic) BOOL forceRefreshCategory;

+ (void)initialize;

@end
