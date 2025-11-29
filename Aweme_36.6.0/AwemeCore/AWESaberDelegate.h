@interface AWESaberDelegate : NSObject <Saber.SaberDelegate>

- (void)registerApplogDataChannelWithCallback:(id /* block */)a0;
- (void)trackWithEvent:(id)a0 params:(id)a1;
- (BOOL)boolValueForKey:(id)a0 defaultValue:(BOOL)a1;
- (id)dictionaryValueForKey:(id)a0;

@end
