@class NSString, BDXContext;
@protocol AnnieXCardModelProtocol, BDXPrefetchConfigLoader, BDXBridgeNetworkServiceProtocol;

@interface BDXPrefetchDataConfig : NSObject

@property (retain, nonatomic) id<BDXPrefetchConfigLoader> configLoader;
@property (copy, nonatomic) NSString *accessKey;
@property (nonatomic) unsigned long long fromType;
@property (retain, nonatomic) id<BDXBridgeNetworkServiceProtocol> networkService;
@property (retain, nonatomic) BDXContext *context;
@property (retain, nonatomic) id<AnnieXCardModelProtocol> cardModel;

- (void).cxx_destruct;

@end
