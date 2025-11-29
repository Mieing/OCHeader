@class MMListenItem, MMListenCategoryItem;

@interface MMListenChatRoomPlaylistContent : WXPBGeneratedMessage

@property (retain, nonatomic) MMListenCategoryItem *playlist;
@property (retain, nonatomic) MMListenItem *playingListenItem;
@property (nonatomic) unsigned long long songStartTimestamp;

+ (void)initialize;

@end
