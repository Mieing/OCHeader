@class NSString;
@protocol BDPNetworkTaskProtocol;

@interface BDPLynxBridgeNetRequestTask : NSObject

@property (copy, nonatomic) NSString *filePath;
@property (weak, nonatomic) id<BDPNetworkTaskProtocol> task;

- (void).cxx_destruct;

@end
