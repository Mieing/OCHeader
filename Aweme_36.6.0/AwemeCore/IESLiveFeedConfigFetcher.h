@class NSMutableDictionary, TabResponse, HTSLiveApi, TabItem, NSString;
@protocol HTSKVStore;

@interface IESLiveFeedConfigFetcher : NSObject <IESLiveFeedConfig>

@property (retain, nonatomic) id<HTSKVStore> configStore;
@property (retain, nonatomic) HTSLiveApi *api;
@property (retain, nonatomic) NSMutableDictionary *feedTabModels;
@property (readonly, nonatomic) TabItem *liveFeedConfig;
@property (readonly, nonatomic) TabResponse *liveFeedTabModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultFetcher;
+ (id)defaultLiveTabModel;

- (id)liveFeedTabModelForLiveEntrance:(long long)a0;
- (id)liveFeedConfigForLiveEntrance:(long long)a0;
- (void)fetchFeedTabModelForLivePosition:(long long)a0 tintTags:(id)a1 completion:(id /* block */)a2;
- (id)feedDrawerTabModel;
- (id)feedDrawerTabConfig;
- (id)getLocalTabModelForEntrance:(long long)a0;
- (void)fetchRequiredTabModel:(id)a0;
- (void)saveLocalTabModel:(id)a0 forEntrance:(long long)a1;
- (void)updateTabModel:(id)a0 forEntrance:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
