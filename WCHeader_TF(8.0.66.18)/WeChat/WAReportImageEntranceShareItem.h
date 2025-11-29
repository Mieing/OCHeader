@class NSString;

@interface WAReportImageEntranceShareItem : WAReportBaseItem

@property (copy, nonatomic) NSString *userName;
@property (nonatomic) int isSuccess;
@property (nonatomic) int chatType;
@property (copy, nonatomic) NSString *chatName;
@property (nonatomic) int chatRoomUserCount;
@property (copy, nonatomic) NSString *chatSessionId;
@property (nonatomic) unsigned int shareTimeStamp;
@property (copy, nonatomic) NSString *currentAppId;
@property (copy, nonatomic) NSString *currentPath;
@property (copy, nonatomic) NSString *imageSrc;
@property (copy, nonatomic) NSString *shareAppId;
@property (copy, nonatomic) NSString *sharePath;
@property (copy, nonatomic) NSString *imageKey;

- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
