@interface TTAdSplashDeviceHelper : NSObject

+ (id)getSysInfoByName:(char *)a0;
+ (BOOL)isPadDevice;
+ (BOOL)judgePadDevice;
+ (BOOL)judge896Screen;
+ (BOOL)judge812Screen;
+ (BOOL)judge736Screen;
+ (BOOL)judge667Screen;
+ (BOOL)judge568Screen;
+ (BOOL)judge480Screen;
+ (BOOL)is480Screen;
+ (BOOL)is568Screen;
+ (BOOL)is667Screen;
+ (BOOL)is736Screen;
+ (BOOL)is812Screen;
+ (BOOL)is896Screen;
+ (BOOL)isIpadProDevice;
+ (id)idfaString;
+ (id)idfvString;
+ (unsigned long long)currentSplitScreenWithSize:(struct CGSize { double x0; double x1; })a0;
+ (BOOL)isIPhone7Device;
+ (BOOL)isAlienScreenDevice;
+ (BOOL)is844Screen;
+ (BOOL)is926Screen;
+ (BOOL)is852Screen;
+ (BOOL)is932Screen;
+ (BOOL)judge852Screen;
+ (BOOL)judge932Screen;
+ (BOOL)judge926Screen;
+ (BOOL)judge844Screen;
+ (double)deviceChangeSize:(double)a0;
+ (BOOL)isSpecialScreen;
+ (BOOL)judge784Screen;
+ (double)newPadding:(double)a0;
+ (double)newFontSize:(double)a0;
+ (struct CGSize { double x0; double x1; })windowSize;
+ (unsigned long long)getDeviceType;
+ (double)screenScale;
+ (id)platform;
+ (id)mainWindow;

@end
