@class NSString, AWESiriTopHitConfigModel, NSObject;
@protocol OS_dispatch_queue;

@interface AWESiriTopHitModule : NSObject <AWEUserMessage> {
    AWESiriTopHitConfigModel *_topHitConfigModel;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic) BOOL hasFeedReadyOccurred;
@property (nonatomic) long long tophitConfigSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEAppShortcutCommonAdapterClass;
+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (id)aAWEAppShortcutCommonAdapter;
- (long long)priorityForSource:(long long)a0;
- (void)updateTopHitConfigModel:(id)a0;
- (void)configTopHitIfNeededWithTiming:(long long)a0 configSource:(long long)a1;
- (void)configTopHitFixedGetterIfNeededWithTiming:(long long)a0 configSource:(long long)a1;
- (void)legacyConfigTopHitIfNeededWithTiming:(long long)a0 configSource:(long long)a1;
- (void)fetchTopHitConfigModelWithCompletion:(id /* block */)a0;
- (id)legacyTopHitConfigModel;
- (void)setLegacyTopHitConfigModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
