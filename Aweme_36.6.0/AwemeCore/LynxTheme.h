@class NSDictionary, NSMutableDictionary;

@interface LynxTheme : NSObject {
    NSMutableDictionary *_themeConfig;
}

@property (copy) NSDictionary *themeConfig;

- (void).cxx_destruct;
- (id)allKeys;
- (id)valueForKey:(id)a0;
- (BOOL)updateValue:(id)a0 forKey:(id)a1;

@end
