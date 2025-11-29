@interface CSJVolumeMonitor : NSObject

@property (nonatomic) long long observerCount;
@property (copy, nonatomic) id /* block */ volumeChangeBlock;

+ (id)getSystemVolumeSlider;
+ (id)defaultMonitor;

- (void)endVolumeMonitor;
- (void)startVolumeMonitor;
- (void)volumeChangeNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
