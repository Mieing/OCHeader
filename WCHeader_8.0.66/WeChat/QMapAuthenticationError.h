@interface QMapAuthenticationError : NSObject

@property (nonatomic) unsigned long long errorOp;
@property (nonatomic) unsigned long long errorType;
@property (nonatomic) long long retCode;

@end
