@class NSArray, NSString, NSDictionary, NSTimer, NSLock;

@interface AWEVideoEngineStrategyService : NSObject <TTVideoEngineStrategyAppService>

@property (retain, nonatomic) NSLock *dataSourceLock;
@property (retain, nonatomic) NSArray *currentDataSource;
@property (nonatomic) unsigned long long currentIndexInFeed;
@property (copy, nonatomic) NSString *currentItemID;
@property (retain, nonatomic) NSDictionary *daspSignalGroup;
@property (retain, nonatomic) NSDictionary *daspPortraitGroup;
@property (retain, nonatomic) NSDictionary *daspDynamicPortraitGroup;
@property (retain, nonatomic) NSTimer *daspSampleTimer;
@property (retain, nonatomic) NSArray *daspDynamicArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)vodStrategy:(id)a0 getMediaPortrait:(id)a1 name:(id)a2 source:(id)a3;
- (void)daspSignalInputWithModel:(id)a0 bsModel:(id)a1 traceID:(id)a2 extraSignal:(id)a3;
- (void)getSignalAndInput;
- (id)getSampleSignalWithKey:(id)a0;
- (id)getPortraitSignalWithKey:(id)a0;
- (unsigned long long)feedPeekLiveAndAdSignal;
- (void).cxx_destruct;
- (id)init;

@end
