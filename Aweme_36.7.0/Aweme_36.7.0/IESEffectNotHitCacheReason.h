@class NSString;

@interface IESEffectNotHitCacheReason : NSObject

@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long deleteCount;
@property (copy, nonatomic) NSString *lastDeleteReasonMsg;
@property (copy, nonatomic) NSString *deleteReasonCodes;
@property (nonatomic) long long lastDeleteReasonCode;
@property (nonatomic) double lastDeleteTime;
@property (nonatomic) long long type;

+ (id)reasonWithCode:(long long)a0 message:(id)a1;

- (id)initWithCode:(long long)a0 message:(id)a1;
- (void).cxx_destruct;
- (id)description;

@end
