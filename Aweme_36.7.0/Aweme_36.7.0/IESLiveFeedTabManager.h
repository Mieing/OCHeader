@class HTSLiveApi, NSMutableDictionary, NSString;
@protocol HTSKVStore;

@interface IESLiveFeedTabManager : NSObject <IESLiveFeedTabService>

@property (retain, nonatomic) HTSLiveApi *api;
@property (retain, nonatomic) id<HTSKVStore> configStore;
@property (retain, nonatomic) NSMutableDictionary *feedTabModels;
@property (nonatomic) BOOL hasRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultFeedTabManager;

- (void)fetchTabModelForCompletion:(id /* block */)a0 tintTags:(id)a1;
- (id)genarateTabModelForLiveEntrence:(id)a0 enterSource:(id)a1;
- (id)generateFeedURLForEnterFrom:(id)a0 enterMethod:(id)a1 feedURLType:(long long)a2 tabId:(id)a3 actionType:(id)a4;
- (id)generateFeedURLForEnterFrom:(id)a0 enterMethod:(id)a1 withType:(long long)a2 tabId:(id)a3 actionType:(id)a4;
- (id)generateFeedURLForSourceKey:(id)a0 path:(id)a1 withType:(long long)a2 tabId:(id)a3 actionType:(id)a4;
- (id)getLocalTabModelForEntrance:(id)a0;
- (id)defaultLiveTabModel;
- (void).cxx_destruct;
- (id)init;

@end
