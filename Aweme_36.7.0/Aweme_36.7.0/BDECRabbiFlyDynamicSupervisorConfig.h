@class NSString, NSArray, NSDictionary;
@protocol BDECRabbiFlyIFontService;

@interface BDECRabbiFlyDynamicSupervisorConfig : NSObject

@property (copy, nonatomic) NSString *biz;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (nonatomic) unsigned long long jsEngineType;
@property (copy, nonatomic) NSArray *slicePreloadList;
@property (copy, nonatomic) NSDictionary *customProps;
@property (copy, nonatomic) NSDictionary *settingDict;
@property (copy, nonatomic) NSString *doNotUseJSEngineScript;
@property (nonatomic) BOOL enableXBridge;
@property (copy, nonatomic) NSString *xBridgeURL;
@property (copy, nonatomic) NSString *unsupportSliceActionToast;
@property (retain, nonatomic) id<BDECRabbiFlyIFontService> fontService;
@property (nonatomic) BOOL shouldTrackExtData;
@property (nonatomic) double delayTrackPerformanceTimeInterval;
@property (nonatomic) BOOL shouldPreloadJSEngineScript;
@property (nonatomic) long long viewCacheCountLimit;

- (void).cxx_destruct;
- (id)init;

@end
