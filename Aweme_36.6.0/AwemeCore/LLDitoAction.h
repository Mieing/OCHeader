@class NSString, NSDictionary;

@interface LLDitoAction : NSObject

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *ditoParams;
@property (copy, nonatomic) id /* block */ customBlock;

+ (id)createActionWithData:(id)a0;
+ (id)naviBarStatusDidChange:(id)a0;
+ (id)generateActivateCacheWithCacheKey:(id)a0;
+ (id)generateClearNodeWithTag:(id)a0;
+ (id)generateRemoveNodeWithTag:(id)a0;
+ (id)generateUserTrackActionWithEventName:(id)a0 params:(id)a1;
+ (id)generateReloadAction;
+ (id)generatePreloadLynxAction;
+ (id)generateOpenURLActionWithURL:(id)a0 extraParams:(id)a1;
+ (id)generateReplaceNodeWithOrignNodeTag:(id)a0 newNodeTag:(id)a1;
+ (id)locateToNodeWithTag:(id)a0 needAnimation:(BOOL)a1;
+ (id)monitorNodesMoveToTop:(id)a0 completeBlock:(id /* block */)a1;

- (id)copyAction;
- (void).cxx_destruct;

@end
