@class NSString;

@interface TTVideoEngineSTSAuth : NSObject

@property (copy, nonatomic) NSString *authAK;
@property (copy, nonatomic) NSString *authSK;
@property (copy, nonatomic) NSString *authSessionToken;
@property (copy, nonatomic) NSString *authExpiredTime;
@property (nonatomic) long long authExpiredTimeInLong;
@property (copy, nonatomic) NSString *curServerTime;
@property (nonatomic) long long curServerTimeInLong;
@property (nonatomic) long long curLocalTimeInLong;

- (long long)getServerTime;
- (id)initWithSTS:(id)a0 sk:(id)a1 sessionToken:(id)a2 expiredTime:(id)a3 curTime:(id)a4;
- (void).cxx_destruct;
- (id)toString;

@end
