@class NSDictionary, NSString;
@protocol IESECLiveUserRecordActionInterface;

@interface IESECLiveToMallSchemeGenerator : NSObject

@property (retain, nonatomic) id<IESECLiveUserRecordActionInterface> actRecordManager;
@property (retain, nonatomic) NSDictionary *businessConfig;
@property (copy, nonatomic) NSString *mallScheme;
@property (retain, nonatomic) NSString *prefetchKey;
@property (nonatomic) BOOL needAppendTabData;

- (id)filterArray;
- (id /* block */)addMallScheme;
- (id /* block */)addActRecordManager;
- (id /* block */)addBusinessConfig;
- (BOOL)vmEnterMallEnable;
- (id /* block */)appendTabData;
- (id /* block */)addPrefetchKey;
- (id)appendRecommendParamsToMallScheme;
- (void)useVMSDKIfNeed;
- (id)curGuideProductID;
- (id)enterMallConfig;
- (id)triggersValueArray;
- (id)showFilterValue;
- (void)prefetchMallData;
- (id)triggerArray;
- (long long)serverTookCount;
- (id)getTabProductIDsSortByClickTime;
- (void).cxx_destruct;
- (id /* block */)build;

@end
