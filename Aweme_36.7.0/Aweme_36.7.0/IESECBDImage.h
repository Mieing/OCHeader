@class NSString, IESECBDImageView, NSDictionary;

@interface IESECBDImage : LynxUIImage

@property (retain, nonatomic) IESECBDImageView *imageView;
@property (copy, nonatomic) NSString *piercedSrc;
@property (copy, nonatomic) NSDictionary *geckoSource;
@property (copy, nonatomic) NSDictionary *monitorInfo;
@property (nonatomic) BOOL ecDisableDownsampling;

+ (id)__lynx_prop_config__920;
+ (id)__lynx_prop_config__961;
+ (id)__lynx_prop_config__1002;
+ (id)__lynx_prop_config__1043;
+ (id)__lynx_prop_config__1084;
+ (void)registerECBDImage;

- (void)requestImage;
- (void)gradientTime:(double)a0 requestReset:(BOOL)a1;
- (void)geckoSource:(id)a0 requestReset:(BOOL)a1;
- (void)monitorInfo:(id)a0 requestReset:(BOOL)a1;
- (void)setEcDisableDownsampling:(BOOL)a0 requestReset:(BOOL)a1;
- (void)pierced:(id)a0 requestReset:(BOOL)a1;
- (BOOL)shouldUseNewImage;
- (void).cxx_destruct;
- (id)createView;

@end
