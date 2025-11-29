@class NSString;

@interface MMOnlineDeviceFunctionMsg : NSObject

@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL shouldMuteNotification;
@property (nonatomic) unsigned int lockDevice;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) unsigned long long messageSvrId;
@property (retain, nonatomic) NSString *functionName;
@property (retain, nonatomic) NSString *arg;
@property (retain, nonatomic) NSString *fromUserName;
@property (retain, nonatomic) NSString *toUserName;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *deviceType;

+ (id)functionMsgWithDictionary:(id)a0;

- (void)parseMarkReadMsg;
- (void)parseDeivceActiveMsg;
- (void).cxx_destruct;

@end
