@class NSString, NSDate;

@interface GACAppCheckToken : NSObject

@property (readonly, nonatomic) NSString *token;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) NSDate *receivedAtDate;

- (id)initWithResponseDict:(id)a0 requestDate:(id)a1 error:(id *)a2;
- (id)initWithTokenExchangeResponse:(id)a0 requestDate:(id)a1 error:(id *)a2;
- (id)initWithToken:(id)a0 expirationDate:(id)a1 receivedAtDate:(id)a2;
- (id)initWithToken:(id)a0 expirationDate:(id)a1;
- (void).cxx_destruct;

@end
