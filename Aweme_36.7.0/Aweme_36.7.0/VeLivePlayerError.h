@class NSString;

@interface VeLivePlayerError : NSError

@property (readonly, nonatomic) long long errorCode;
@property (readonly, nonatomic) NSString *errorMsg;

- (id)initWithCode:(long long)a0 errorMessage:(id)a1;
- (id)initWithInternalCode:(long long)a0 errorMessage:(id)a1;
- (void).cxx_destruct;

@end
