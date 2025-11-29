@class AWEMVChannelDataUtils;

@interface AWEMVDifferentSceneDataConfig : NSObject

@property (nonatomic) unsigned long long feedType;
@property (nonatomic) unsigned long long usageType;
@property (nonatomic) BOOL shouldUseCache;
@property (nonatomic) BOOL shouldInsertBanner;
@property (nonatomic) BOOL shouldRequestAfterLogOut;
@property (retain, nonatomic) AWEMVChannelDataUtils *dataUtils;

- (void).cxx_destruct;

@end
