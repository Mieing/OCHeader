@class NSMutableArray, AWEAwemeModel;

@interface AWEJXUGPreloadModel : NSObject

@property (retain, nonatomic) NSMutableArray *preloadScenes;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) unsigned long long phase;

+ (id)defaultValue;

- (BOOL)canPreload;
- (void).cxx_destruct;

@end
