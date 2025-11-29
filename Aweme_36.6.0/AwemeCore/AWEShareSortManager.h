@class NSString, AWEShareDynamicSortManager, AWEShareStaticSortManager;

@interface AWEShareSortManager : NSObject <AWEShareMessage>

@property (retain, nonatomic) AWEShareDynamicSortManager *dynamicSortManager;
@property (retain, nonatomic) AWEShareStaticSortManager *staticSortManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldMoveDouPlusIconToFifthPlace:(id)a0;
+ (void)sortChannels:(id)a0 withContext:(id)a1;
+ (id)mostRecentShareChannelTypes;
+ (void)moveDouPlusIconToFifthPlace:(id)a0 withContext:(id)a1;
+ (id)sharedManager;

- (void)willExecuteShareTask:(id)a0;
- (void)sortChannels:(id)a0 withContext:(id)a1;
- (void)updateMostRecentShareChannelTypesWithType:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
