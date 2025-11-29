@class NSArray;

@interface XPlayDebugManager : NSObject

@property (nonatomic) BOOL enable;
@property (retain, nonatomic) NSArray *debugInfoList;

+ (id)modelWithPropertyKey:(id)a0 list:(id)a1;
+ (void)load;
+ (id)manager;

- (id)injectConfiguration:(id)a0;
- (id)modelWithPropertyKey:(id)a0;
- (id)debugGameId:(id)a0;
- (void).cxx_destruct;

@end
