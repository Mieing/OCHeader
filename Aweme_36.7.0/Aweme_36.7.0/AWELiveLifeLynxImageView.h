@class UIImageView;

@interface AWELiveLifeLynxImageView : LynxUI

@property (retain, nonatomic) UIImageView *imageView;

+ (id)__lynx_prop_config__381;
+ (id)__lynx_prop_config__280;

- (void)trackerImageMonitor:(double)a0 endTime:(double)a1 url:(id)a2;
- (void)updateSrc:(id)a0 requestReset:(BOOL)a1;
- (void)updateMode:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)createView;

@end
