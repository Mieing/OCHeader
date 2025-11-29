@class NSString;

@interface TCOError : NSObject

@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *msg;

+ (void)setLastOAuthError:(int)a0 msg:(id)a1;
+ (id)getLastOAuthError;
+ (void)setLastQQApiError:(int)a0 msg:(id)a1;
+ (id)getLastQQApiError;

- (void).cxx_destruct;

@end
