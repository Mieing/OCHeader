@class BDACSConfigModel, BDACSResourceManager, BDACSResponseItem;

@interface BDACSPornInspectTask : NSObject

@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) long long type;
@property (retain, nonatomic) BDACSConfigModel *config;
@property (retain, nonatomic) BDACSResponseItem *detectFileData;
@property (retain, nonatomic) BDACSResourceManager *resourceManager;

- (void).cxx_destruct;

@end
