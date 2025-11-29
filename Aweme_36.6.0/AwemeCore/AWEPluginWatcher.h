@class NSString, AWEGokuPlugin;

@interface AWEPluginWatcher : NSObject

@property (copy, nonatomic) NSString *key;
@property (weak, nonatomic) AWEGokuPlugin *plugin;

+ (void)watchPlugin:(id)a0 forKey:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;

@end
