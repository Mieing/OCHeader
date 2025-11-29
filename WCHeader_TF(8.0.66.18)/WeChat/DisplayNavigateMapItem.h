@class NavigateMap, NSString;

@interface DisplayNavigateMapItem : MMObject

@property (retain, nonatomic) NavigateMap *map;
@property (copy, nonatomic) NSString *displayName;
@property BOOL isInstalled;

- (id)initWithMap:(id)a0 DisplayName:(id)a1 IsInstalled:(BOOL)a2;
- (void).cxx_destruct;

@end
