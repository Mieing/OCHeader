@class NSString;

@interface WAReportImageEntranceExposeItem : WAReportBaseItem

@property (copy, nonatomic) NSString *userName;
@property (nonatomic) unsigned int exposeUserUin;
@property (nonatomic) int chatType;
@property (copy, nonatomic) NSString *chatName;
@property (nonatomic) int chatRoomUserCount;
@property (copy, nonatomic) NSString *chatSessionId;
@property (nonatomic) unsigned int exposeTimeStamp;
@property (nonatomic) int exposeScene;
@property (copy, nonatomic) NSString *imageSrc;
@property (copy, nonatomic) NSString *exposeAppId;
@property (copy, nonatomic) NSString *exposePath;
@property (copy, nonatomic) NSString *imageKey;

- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
