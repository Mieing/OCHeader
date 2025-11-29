@class NSString, NSData;

@interface AffRoamTaskInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long packageId;
@property (retain, nonatomic) NSString *deviceId;
@property (nonatomic) int state;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long elapsedTime;
@property (nonatomic) unsigned long long completeTime;
@property (nonatomic) unsigned long long transferCurrent;
@property (nonatomic) unsigned long long transferTotal;
@property (nonatomic) int type;
@property (retain, nonatomic) NSData *request;

+ (void)initialize;

@end
