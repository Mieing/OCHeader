@class NSString;

@interface AWESharkLoadResult : NSObject

@property (nonatomic) BOOL success;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorMsg;

- (void).cxx_destruct;

@end
