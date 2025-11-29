@class NSString, NSMutableArray, MMFinderLivePIPCustomHandleLogic;

@interface MMFinderLivePIPRenderSpaceObject : NSObject

@property (nonatomic) long long space;
@property (retain, nonatomic) NSMutableArray *renderList;
@property (retain, nonatomic) NSString *staticFirstRenderId;
@property (retain, nonatomic) NSString *staticLastRenderId;
@property (weak, nonatomic) MMFinderLivePIPCustomHandleLogic *rootHandleLogic;

+ (id)createRenderSpaceObject:(long long)a0;

- (BOOL)innerInsertRenderId:(id)a0 belowAnyRenderObjWithBusinessNames:(id)a1;
- (BOOL)innerInsertRenderId:(id)a0 aboveAnyRenderObjWithBusinessNames:(id)a1;
- (BOOL)innerInsertRenderId:(id)a0 belowRenderObjWithBusinessIds:(id)a1;
- (BOOL)innerInsertRenderId:(id)a0 aboveRenderObjWithBusinessIds:(id)a1;
- (BOOL)innerInsertStaticFirstRenderId:(id)a0;
- (BOOL)innerAddStaticLastRenderId:(id)a0;
- (BOOL)innerInsertRenderId:(id)a0;
- (BOOL)innerAddRenderId:(id)a0;
- (BOOL)innerRemoveRenderId:(id)a0;
- (BOOL)innerClearAllRenderIds;
- (id)innerGetRenderIdListDescription;
- (BOOL)innerClearUnValidRenderIdList;
- (BOOL)isContainerRenderId:(id)a0;
- (void)safeInsertRenderId:(id)a0 atIndex:(long long)a1;
- (void)safeRemoveRenderId:(id)a0;
- (void)safeAddRenderId:(id)a0;
- (void)removeAllRenderId;
- (BOOL)checkIndexOverLimit:(long long)a0;
- (void)checkStaticRenderIdAffectedByNewRenderId:(id)a0;
- (id)getLastRenderIdWithLiveViewName:(id)a0;
- (void).cxx_destruct;

@end
