@class BDPDynamicPluginModel, NSMutableArray;
@protocol BDPNetworkTaskProtocol;

@interface BDPDynamicPluginDownloadModel : NSObject

@property (retain, nonatomic) id<BDPNetworkTaskProtocol> downloadTask;
@property (retain, nonatomic) BDPDynamicPluginModel *pluginModel;
@property (retain, nonatomic) NSMutableArray *completions;

- (void).cxx_destruct;

@end
