@class NSMutableDictionary, NSMutableSet;

@interface NewTipsConfigCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *dictNewTipsConfig;
@property (retain, nonatomic) NSMutableSet *xlabNewTipsConfig;

- (void)registerNewTipsCenter;
- (void)deleteUselessConfigFile;
- (id)init;
- (id)getNewTipsConfigWithTipsId:(unsigned int)a0;
- (id)getDictNewTipsConfig;
- (id)getXLabNewTipsConfig;
- (void)registerLocalTips:(unsigned int)a0 UID:(id)a1;
- (void)registerLocalTips:(unsigned int)a0 UID:(id)a1 FilterClass:(id)a2;
- (void)registerDynamicTips:(unsigned int)a0;
- (void)registerDynamicTips:(unsigned int)a0 FilterClass:(id)a1;
- (void)registerInteractiveTips:(unsigned int)a0;
- (void)registerInteractiveTips:(unsigned int)a0 FilterClass:(id)a1;
- (void)registerXLabTips:(id)a0;
- (id)getConfigWithId:(unsigned int)a0 Type:(unsigned long long)a1 FilterClass:(id)a2;
- (id)GetRootPathOfNewTips;
- (id)GetPathOfNewTipsConfig;
- (void).cxx_destruct;

@end
