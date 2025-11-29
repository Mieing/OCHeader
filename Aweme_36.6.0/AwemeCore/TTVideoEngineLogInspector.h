@class NSString;
@protocol TTVideoEngineNetClient;

@interface TTVideoEngineLogInspector : NSObject

@property (retain, nonatomic) id<TTVideoEngineNetClient> networkSession;
@property (retain, nonatomic) NSString *host;

+ (id)sharedInstance;

- (void)inspectEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
