@protocol BDPNetworkTaskProtocol;

@interface BDPStarkNetworkTask : NSObject

@property (retain, nonatomic) id<BDPNetworkTaskProtocol> task;
@property (nonatomic) BOOL isDownloading;

- (void).cxx_destruct;
- (void)start;

@end
