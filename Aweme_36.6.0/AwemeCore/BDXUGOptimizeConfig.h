@class NSArray;
@protocol BDXBridgeNetworkServiceProtocol;

@interface BDXUGOptimizeConfig : NSObject

@property (copy, nonatomic) NSArray *prefetchList;
@property (copy, nonatomic) NSArray *preloadList;
@property (retain, nonatomic) id<BDXBridgeNetworkServiceProtocol> networkService;

- (void).cxx_destruct;

@end
