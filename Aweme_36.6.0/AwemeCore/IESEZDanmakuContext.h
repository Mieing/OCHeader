@class NSString, NSDictionary, NSHashTable;

@interface IESEZDanmakuContext : NSObject

@property (retain, nonatomic) NSHashTable *componentsContextMap;
@property (copy, nonatomic) NSString *bizID;
@property (copy, nonatomic) NSDictionary *componentsConfig;

- (id)dockingStation;
- (id)getDanmakuComponentsWithKey:(id)a0;
- (void)setDanmakuComponents:(id)a0 withKey:(id)a1;
- (id)canvas;
- (id)dispatcher;
- (void).cxx_destruct;
- (id)clock;
- (id)notificationCenter;
- (id)init;
- (id)reusePool;
- (id)settings;

@end
