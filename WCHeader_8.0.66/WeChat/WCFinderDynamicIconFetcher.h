@class NSMapTable, NSMutableDictionary;

@interface WCFinderDynamicIconFetcher : NSObject

@property (retain, nonatomic) NSMapTable *imageCache;
@property (retain, nonatomic) NSMutableDictionary *imageProcessMap;

- (id)init;
- (id)fetchImageWithDarkUrl:(id)a0 lightUrl:(id)a1 size:(struct CGSize { double x0; double x1; })a2 color:(id)a3;
- (id)createTaskConfig:(id)a0 size:(struct CGSize { double x0; double x1; })a1 color:(id)a2 isDark:(BOOL)a3;
- (id)createFetchTaskWithDark:(id)a0 light:(id)a1;
- (id)covertDynamicColor:(id)a0 dark:(BOOL)a1;
- (void).cxx_destruct;

@end
