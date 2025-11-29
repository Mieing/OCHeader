@class NSMutableDictionary;

@interface AWECreativeInspirationColorManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *colorDictionary;

+ (id)sharedManager;

- (id)colorForKey:(id)a0;
- (void)addColorForKey:(id)a0 color:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
