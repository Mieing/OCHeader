@class NSString, NSMutableDictionary;

@interface QBBeaconEventRecord : QBBeaconPersistObject <NSMutableCopying>

@property (retain, nonatomic) NSString *apn;
@property (retain, nonatomic) NSString *srcIp;
@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSString *eventValue;
@property (nonatomic) long long eventTime;
@property (nonatomic) BOOL isSuccess;
@property (nonatomic) long long elapse;
@property (nonatomic) long long packageSize;
@property (nonatomic) int eventType;
@property (nonatomic) BOOL isRealEvent;
@property (retain, nonatomic) NSMutableDictionary *params;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)createWUPModel;
- (void)dealloc;
- (void).cxx_destruct;

@end
