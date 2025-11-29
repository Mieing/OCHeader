@class NSString;

@interface BDTGKeyAttestTracker : NSObject

@property (copy, nonatomic) NSString *scene;
@property (nonatomic) double startTime;
@property (nonatomic) double preGenerateKeyTime;
@property (nonatomic) double generateKeyTime;
@property (nonatomic) double preAttestKeyTime;
@property (nonatomic) double attestKeyTime;
@property (nonatomic) double preGetTeeCertTime;
@property (nonatomic) double startRequestTime;
@property (nonatomic) double responseTime;
@property (copy, nonatomic) NSString *serverAttestPubKey;
@property (copy, nonatomic) NSString *errorDesc;
@property (nonatomic) long long errorCode;
@property (nonatomic) long long attemptCount;
@property (nonatomic) long long localizedCode;
@property (copy, nonatomic) NSString *logID;

- (void)configErrorCode:(long long)a0 errorDesc:(id)a1 localizedCode:(long long)a2 logID:(id)a3;
- (void)addAttempCountAndClearError;
- (void)configErrorCode:(long long)a0 errorDesc:(id)a1 localizedCode:(long long)a2;
- (void).cxx_destruct;

@end
