@class NSLock, NSDictionary;

@interface AWEDCFeedBottomTabPreloadManager : NSObject

@property (nonatomic) BOOL hasSetup;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSDictionary *dataModelMap;
@property (retain, nonatomic) NSDictionary *taskMap;
@property (retain, nonatomic) NSDictionary *entryMap;
@property (readonly, copy, nonatomic) NSDictionary *config;

- (void)p_setup;
- (id)getLocalSpecialEntryWithTabID:(id)a0;
- (id)getSpecialDataModelWithTabID:(id)a0;
- (void)tryLoadAllSpecialModelWithCompletion:(id /* block */)a0;
- (id)p_generateTaskWithDataModel:(id)a0 tabID:(id)a1;
- (void)p_trySetup;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
