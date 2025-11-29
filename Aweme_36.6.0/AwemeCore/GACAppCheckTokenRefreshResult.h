@class NSDate;

@interface GACAppCheckTokenRefreshResult : NSObject

@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSDate *tokenExpirationDate;
@property (readonly, nonatomic) NSDate *tokenReceivedAtDate;

- (id)initWithStatusNever;
- (id)initWithStatusSuccessAndExpirationDate:(id)a0 receivedAtDate:(id)a1;
- (id)initWithStatusFailure;
- (id)initWithStatus:(long long)a0 expirationDate:(id)a1 receivedAtDate:(id)a2;
- (void).cxx_destruct;

@end
