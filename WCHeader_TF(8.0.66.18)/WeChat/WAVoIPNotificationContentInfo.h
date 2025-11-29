@class NSString;

@interface WAVoIPNotificationContentInfo : NSObject

@property (retain, nonatomic) NSString *roomID;
@property (nonatomic) BOOL isInvite;
@property (nonatomic) BOOL isPrivate;
@property (retain, nonatomic) NSString *headImgUrl;
@property (nonatomic) BOOL isVideo;
@property (retain, nonatomic) NSString *callerUserName;
@property (retain, nonatomic) NSString *msgID;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *requestID;
@property (nonatomic) BOOL isFromAPNS;
@property (nonatomic) double receiveTimestamp;

+ (id)notificationContentFromUserInfo:(id)a0;

- (unsigned long long)VoIPIntent_contentType;
- (id)userInfos;
- (id)initWithRoomID:(id)a0 requestID:(id)a1 isInvite:(BOOL)a2 isPrivate:(BOOL)a3 headImgUrl:(id)a4 isVideo:(BOOL)a5 callerUserName:(id)a6 msgID:(id)a7 createTime:(unsigned int)a8 isFromAPNS:(BOOL)a9 receiveTimestamp:(double)a10;
- (void).cxx_destruct;

@end
