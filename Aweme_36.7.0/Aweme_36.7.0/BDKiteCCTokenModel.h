@class NSString;

@interface BDKiteCCTokenModel : NSObject

@property (nonatomic) long long service;
@property (nonatomic) long long carrierType;
@property (nonatomic) long long scene;
@property (nonatomic) long long netState;
@property (nonatomic) long long startTime;
@property (nonatomic) long long localFrequencyEndTime;
@property (nonatomic) long long serverFrequencyEndTime;
@property (nonatomic) BOOL isServerFrequency;
@property (nonatomic) long long getTokenTime;
@property (nonatomic) long long reportCenterTime;
@property (retain, nonatomic) NSString *token;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) long long localizedErrorCode;
@property (copy, nonatomic) NSString *errorCode;
@property (copy, nonatomic) NSString *errorMessage;
@property (copy, nonatomic) NSString *verifyLogID;
@property (copy, nonatomic) NSString *reportLogID;

- (id)initWithService:(long long)a0 carrierType:(long long)a1 scene:(long long)a2 startTime:(long long)a3 localFrequencyEndTime:(long long)a4 state:(long long)a5;
- (void).cxx_destruct;
- (id)networkName;

@end
