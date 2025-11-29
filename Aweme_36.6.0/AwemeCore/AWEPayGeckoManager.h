@class AWEGeckoCDNManager;

@interface AWEPayGeckoManager : NSObject

@property (retain, nonatomic) AWEGeckoCDNManager *manager;

+ (id)resoutceDirectoryForChannel:(id)a0;
+ (id)dataForPath:(id)a0 channel:(id)a1;
+ (id)imageForPath:(id)a0 channel:(id)a1;
+ (id)imageWithContentsOfFile:(id)a0 channel:(id)a1;
+ (id)imageForPath:(id)a0 channel:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
+ (id)shareInstance;

- (void).cxx_destruct;
- (id)init;

@end
