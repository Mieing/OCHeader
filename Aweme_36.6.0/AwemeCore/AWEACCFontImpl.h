@class NSString;

@interface AWEACCFontImpl : NSObject <ACCFontProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)acc_bigFontModeOn;
+ (long long)aweFontWeight:(long long)a0;
+ (long long)aweFontClass:(long long)a0;
+ (long long)duxFontWeight:(long long)a0;
+ (long long)duxFontClass:(long long)a0;

- (id)acc_systemFontOfSize:(double)a0;
- (id)acc_systemFontOfSize:(double)a0 weight:(long long)a1;
- (id)acc_boldSystemFontOfSize:(double)a0;
- (id)acc_fontWithName:(id)a0 size:(double)a1;
- (void)p_registerFontWithURL:(id)a0;
- (id)fontOfClass:(long long)a0 weight:(long long)a1;
- (id)systemFontOfSize:(double)a0 weight:(long long)a1 limit115:(BOOL)a2;
- (double)acc_inCameraViewScaleFactor;
- (BOOL)acc_bigFontModeOn;
- (double)acc_fontScaleFactor;
- (double)acc_outerCameraViewScaleFactor;
- (double)acc_viewScaleFactor;
- (id)acc_fontOfClass:(long long)a0 weight:(long long)a1;
- (id)iconFontWithPath:(id)a0 name:(id)a1 size:(double)a2;
- (id)acc_fontWithName:(id)a0 size:(double)a1 limit115:(BOOL)a2;
- (id)acc_boldSystemFontOfSize:(double)a0 limit115:(BOOL)a1;
- (BOOL)canConvertToDUXFontWeightWithACCFontWeight:(long long)a0;
- (id)boldSystemFontOfSize:(double)a0;
- (id)systemFontOfSize:(double)a0 weight:(long long)a1;
- (id)systemFontOfSize:(double)a0;

@end
