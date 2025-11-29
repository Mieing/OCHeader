@interface AWETheaterColorCalculation : NSObject

+ (id)colorLerpFromColor:(id)a0 toColor:(id)a1 fraction:(double)a2;
+ (id)getFeedColor:(id)a0 themeStyle:(long long)a1;
+ (id)colorPickerForVideoHallWithImage:(id)a0;
+ (void)getFeedColorWithUrl:(id)a0 themeStyle:(long long)a1 completion:(id /* block */)a2;
+ (id)getHeaderColor:(id)a0;
+ (id)overlayColorForVideoHallWithBaseColor:(id)a0 addColor:(id)a1;

@end
