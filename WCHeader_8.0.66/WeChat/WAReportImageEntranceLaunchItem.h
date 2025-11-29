@class NSString;

@interface WAReportImageEntranceLaunchItem : WAReportBaseItem

@property (copy, nonatomic) NSString *userName;
@property (nonatomic) unsigned int exposeUserUin;
@property (nonatomic) int chatType;
@property (copy, nonatomic) NSString *chatName;
@property (nonatomic) int chatRoomUserCount;
@property (copy, nonatomic) NSString *chatSessionId;
@property (nonatomic) unsigned int launchTimeStamp;
@property (nonatomic) int launchScene;
@property (copy, nonatomic) NSString *imageSrc;
@property (copy, nonatomic) NSString *launchAppId;
@property (copy, nonatomic) NSString *launchPath;
@property (copy, nonatomic) NSString *imageKey;

- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
