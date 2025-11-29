@class NSDictionary;

@interface AWEAspectBlockList : NSObject

@property (retain, nonatomic) NSDictionary *blocklistDictionary;

- (BOOL)isMethodHookBlocked:(id)a0 withClass:(Class)a1 withSelector:(SEL)a2;
- (void).cxx_destruct;
- (id)initWithJsonDictionary:(id)a0;

@end
