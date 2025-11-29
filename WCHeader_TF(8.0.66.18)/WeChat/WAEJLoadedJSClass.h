@class NSDictionary;

@interface WAEJLoadedJSClass : NSObject

@property (readonly) struct OpaqueJSClass { } *jsClass;
@property (readonly) NSDictionary *constantValues;

- (id)initWithJSClass:(struct OpaqueJSClass { } *)a0 constantValues:(id)a1;
- (void)dealloc;

@end
