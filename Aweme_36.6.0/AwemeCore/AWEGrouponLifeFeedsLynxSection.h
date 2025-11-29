@class NSMutableDictionary, NSMutableOrderedSet;

@interface AWEGrouponLifeFeedsLynxSection : NSObject

@property (retain, nonatomic) NSMutableDictionary *reuseItemMap;
@property (retain, nonatomic) NSMutableOrderedSet *dormancyReuseItemKeySet;
@property (retain, nonatomic) NSMutableOrderedSet *activationReuseItemKeySet;
@property (retain, nonatomic) NSMutableDictionary *lynxViewItemMap;

- (void)dormancyLynxView:(id)a0;
- (id)lynxViewWithSessionId:(id)a0;
- (void)activateLynxView:(id)a0;
- (id)tryFetchReuseLynxViewWithSessionId:(id)a0;
- (void)reuseLynxView:(id)a0;
- (id)employLynxView:(id)a0;
- (void)dormancyAll;
- (id)lynxViewItemByContainerId:(id)a0;
- (id)itemWithLynxView:(id)a0;
- (void)dormancyItem:(id)a0;
- (void)activateItem:(id)a0;
- (void).cxx_destruct;
- (void)removeItem:(id)a0;
- (id)init;

@end
