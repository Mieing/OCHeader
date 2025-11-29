@class AWEListDataController;

@interface AWEFeedContainerConfig : AWEFeedContainerBaseConfig

@property (nonatomic) long long type;
@property (retain, nonatomic) AWEListDataController *dataController;

+ (id)defaultConfig;

- (void).cxx_destruct;

@end
