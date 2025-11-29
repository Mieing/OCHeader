@interface IESSoloKTVUtil : NSObject

+ (BOOL)isMicroPhoneNotDetermined;
+ (id)parseLyricWithFile:(id)a0 lyricType:(unsigned long long)a1 lyricsOffset:(double)a2 duration:(long long)a3;
+ (id)loadFontFromPath:(id)a0 size:(double)a1;
+ (void)requestImageWithPHAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
+ (id)genImageAtTimeSync:(double)a0 asset:(id)a1 error:(id *)a2;
+ (void)requestResourcePathWithPHAsset:(id)a0 completion:(id /* block */)a1;
+ (id)trackPageNameWithState:(long long)a0;
+ (BOOL)isMicroPhoneNotDenied;
+ (BOOL)isHeadset;
+ (BOOL)isNoDiskSpace:(id)a0;
+ (id)effectJsonStringWithPath:(id)a0;
+ (BOOL)equalFloat:(double)a0 f2:(double)a1;
+ (id)getColorFrame:(int)a0 sColor:(id)a1 eColor:(id)a2;
+ (id)colorToCIColor:(id)a0;
+ (void)requestImagePathWithPHAsset:(id)a0 completion:(id /* block */)a1;
+ (void)requestVideoPathWithPHAsset:(id)a0 completion:(id /* block */)a1;
+ (id)defaultFont:(double)a0;
+ (void)genImageAtTime:(double)a0 asset:(id)a1 completion:(id /* block */)a2;
+ (struct CGSize { double x0; double x1; })getVideoSize:(id)a0;
+ (struct CGSize { double x0; double x1; })resize:(struct CGSize { double x0; double x1; })a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)notBluetooth;
+ (BOOL)isBluetooth;
+ (double)screenScale;

@end
