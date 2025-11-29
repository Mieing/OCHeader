@class NSString, NSDictionary, OnceLock, AWEFeedCacheDataDepository;

@interface AWEFeedCacheDisasterFactoryCreator : NSObject <AWEFeedCacheProcessorFactoryCreator>

@property (readonly, nonatomic) AWEFeedCacheDataDepository *dataDepository;
@property (retain, nonatomic) OnceLock *process_lock;
@property (copy, nonatomic) NSDictionary *sceneConfig;
@property (nonatomic) double lastRequestTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createUpdateProcessorsWithDataDepository:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)create;
- (void)restoreInfo;
- (void)initData;

@end
