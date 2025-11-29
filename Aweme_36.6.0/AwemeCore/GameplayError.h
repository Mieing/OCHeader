@class NSString;

@interface GameplayError : NSObject

@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorMsg;

- (void).cxx_destruct;

@end
