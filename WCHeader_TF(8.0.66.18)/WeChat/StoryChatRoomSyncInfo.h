@class NSString;

@interface StoryChatRoomSyncInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned long long objId;
@property (nonatomic) unsigned int objPostTime;
@property (retain, nonatomic) NSString *thumbUrl;
@property (nonatomic) unsigned int storyCount;
@property (retain, nonatomic) NSString *videoUrl;

+ (void)initialize;

@end
