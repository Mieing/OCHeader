@class NSString;

@interface BDXLoggerContext : NSObject

@property (copy, nonatomic) NSString *paramsMessage;
@property (copy, nonatomic) NSString *containerName;
@property (copy, nonatomic) NSString *bulletSession;
@property (copy, nonatomic) NSString *xBridgeSession;
@property (copy, nonatomic) NSString *resourceLoaderSession;
@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) NSString *xBridgeMethodName;
@property (copy, nonatomic) NSString *xBridgeMethodStage;

- (void).cxx_destruct;
- (id)init;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;

@end
