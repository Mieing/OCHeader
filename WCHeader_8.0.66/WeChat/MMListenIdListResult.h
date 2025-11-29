@class MMListenRecommendInfo, NSString, MMListenClassicMusicInfo, MMListenChatRoomInfo, MMListenItem, MMListenRelatedItem, MMListenSimplePlayableInfo;

@interface MMListenIdListResult : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) MMListenRecommendInfo *recommendInfo;
@property (retain, nonatomic) NSString *extInfo;
@property (retain, nonatomic) NSString *baseListenId;
@property (retain, nonatomic) MMListenItem *listenItem;
@property (retain, nonatomic) MMListenItem *relatedListenItem;
@property (retain, nonatomic) MMListenRelatedItem *relatedItem;
@property (retain, nonatomic) MMListenSimplePlayableInfo *simplePlayableInfo;
@property (retain, nonatomic) MMListenChatRoomInfo *chatRoomInfo;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) MMListenClassicMusicInfo *classicMusicInfo;

+ (void)initialize;

@end
