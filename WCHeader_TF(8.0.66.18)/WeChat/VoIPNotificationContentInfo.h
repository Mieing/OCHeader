@class NSString;

@interface VoIPNotificationContentInfo : NSObject

@property (retain, nonatomic) NSString *roomID;
@property (retain, nonatomic) NSString *roomKey;
@property (nonatomic) BOOL isInvite;
@property (nonatomic) BOOL isMultiply;
@property (nonatomic) BOOL isPrivate;
@property (retain, nonatomic) NSString *headImgBase64Url;
@property (nonatomic) BOOL isVideo;
@property (retain, nonatomic) NSString *callerUserName;
@property (retain, nonatomic) NSString *realCallerUserName;
@property (retain, nonatomic) NSString *inviteID;
@property (retain, nonatomic) NSString *msgID;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *requestID;
@property (nonatomic) BOOL isFromAPNS;
@property (nonatomic) double receiveTimestamp;
@property (nonatomic) BOOL isIlink;
@property (retain, nonatomic) NSString *ilinkctx;
@property (nonatomic) long long ilinkctxver;
@property (retain, nonatomic) NSString *lckinviter;

+ (id)notificationContentInfoFromAppExtensionDataUtil;
+ (id)notificationContentFromUserInfo:(id)a0;
+ (id)notificationContentFromAPNSPushRequest:(id)a0 decryptPayload:(id)a1;

- (unsigned long long)WCNotificationArrivalReport_voIPContentType;
- (id)voIPMtInviteMsg;
- (id)monoMsg;
- (unsigned long long)VoIPIntent_contentType;
- (id)initWithRoomID:(id)a0 roomKey:(id)a1 isInvite:(BOOL)a2 isMultiply:(BOOL)a3 isPrivate:(BOOL)a4 headImgBase64Url:(id)a5 isVideo:(BOOL)a6 callerUserName:(id)a7 realCallerUserName:(id)a8 inviteID:(id)a9 msgID:(id)a10 createTime:(unsigned int)a11 requestID:(id)a12 isFromAPNS:(BOOL)a13 receiveTimestamp:(double)a14 isIlink:(BOOL)a15 ilinkctx:(id)a16 ilinkctxver:(long long)a17 lckinviter:(id)a18;
- (id)userInfos;
- (id)userInfosWithAPNSPushRequest:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
