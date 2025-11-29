@class NSString, MMListenUserInfo;

@interface MMListenMusicChatRoomInfo_Announcement : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned long long expireTime;
@property (nonatomic) unsigned long long publishTime;
@property (retain, nonatomic) MMListenUserInfo *authorInfo;
@property (retain, nonatomic) NSString *categoryId;
@property (retain, nonatomic) NSString *ttsListenId;
@property (retain, nonatomic) NSString *songUuid;

+ (void)initialize;

@end
