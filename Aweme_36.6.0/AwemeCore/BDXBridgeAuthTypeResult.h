@class NSString;

@interface BDXBridgeAuthTypeResult : NSObject

@property (nonatomic) long long authType;
@property (nonatomic) BOOL enableForcePrivate;
@property (copy, nonatomic) NSString *feIdMapper;

- (void).cxx_destruct;

@end
