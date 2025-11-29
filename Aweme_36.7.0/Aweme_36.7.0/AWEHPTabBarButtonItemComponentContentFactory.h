@class NSMutableDictionary;

@interface AWEHPTabBarButtonItemComponentContentFactory : NSObject

@property (retain, nonatomic) NSMutableDictionary *configToContent;

+ (id)sharedInstance;

- (id)createContentWithModel:(id)a0;
- (void)registerAllContent;
- (void)registerContentWithConfigClass:(Class)a0 contentClass:(Class)a1;
- (void).cxx_destruct;
- (id)init;

@end
