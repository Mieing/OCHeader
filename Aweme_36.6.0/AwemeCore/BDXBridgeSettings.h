@class NSSet;

@interface BDXBridgeSettings : NSObject

@property (nonatomic) BOOL lynxBridgeEnabled;
@property (nonatomic) BOOL webBridgeEnabled;
@property (nonatomic) BOOL injectOldProtocol;
@property (copy, nonatomic) NSSet *legacyProtocolMethods;
@property (nonatomic) BOOL iesBridgeEngineForBDXBridgeEnabled;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
