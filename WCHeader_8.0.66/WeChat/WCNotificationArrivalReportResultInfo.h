@class NSString;

@interface WCNotificationArrivalReportResultInfo : NSObject

@property (nonatomic) unsigned long long channel;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *messageID;
@property (nonatomic) unsigned long long contentType;
@property (nonatomic) BOOL isFailed;
@property (nonatomic) long long statusCode;
@property (nonatomic) long long errorCode;
@property (retain, nonatomic) NSString *errorDescription;
@property (nonatomic) unsigned long long voIPContentType;
@property (retain, nonatomic) NSString *voIPContentRoomID;
@property (retain, nonatomic) NSString *voIPContentRoomKey;

+ (id)resultInfoWithUserInfos:(id)a0;
+ (id)resultInfoWithChannel:(unsigned long long)a0 notificationUserInfo:(id)a1 cbURLResponse:(id)a2 cbURLSessionError:(id)a3;

- (void)collect;
- (id)initWithChannel:(unsigned long long)a0 url:(id)a1 messageID:(id)a2 contentType:(unsigned long long)a3 isFailed:(BOOL)a4 statusCode:(long long)a5 errorCode:(long long)a6 errorDescription:(id)a7 voIPContentType:(unsigned long long)a8 voIPContentRoomID:(id)a9 voIPContentRoomKey:(id)a10;
- (id)userInfos;
- (id)description;
- (void).cxx_destruct;

@end
