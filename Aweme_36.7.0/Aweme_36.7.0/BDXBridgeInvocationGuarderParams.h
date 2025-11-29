@class NSString;

@interface BDXBridgeInvocationGuarderParams : NSObject

@property (copy, nonatomic) NSString *urlString;
@property (nonatomic) unsigned long long engineType;
@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) NSString *namespace;
@property (copy, nonatomic) NSString *methodName;

- (void).cxx_destruct;

@end
