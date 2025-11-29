@interface ALPError : NSObject

@property (nonatomic) long long errorCode;

+ (id)initWithErrorType:(long long)a0;

- (id)description;

@end
