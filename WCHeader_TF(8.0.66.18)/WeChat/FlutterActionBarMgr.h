@class NSMapTable;

@interface FlutterActionBarMgr : NSObject

@property (retain, nonatomic) NSMapTable *map;
@property (nonatomic) double statusBarHeight;
@property (nonatomic) double navigationBarMargin;

+ (id)instance;
+ (void)putWithId:(id)a0 helper:(id)a1;
+ (id)getWithId:(id)a0;
+ (void)removeWithId:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
