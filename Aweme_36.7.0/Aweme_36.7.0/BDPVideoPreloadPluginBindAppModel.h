@class BDPUniqueID;

@interface BDPVideoPreloadPluginBindAppModel : BDPVideoPreloadPluginModel

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) long long pageID;
@property (nonatomic) BOOL callFromWorker;


@end
