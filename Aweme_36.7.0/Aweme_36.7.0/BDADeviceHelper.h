@interface BDADeviceHelper : NSObject

+ (id)resolutionString;
+ (BOOL)isJailBroken;
+ (BOOL)isPadDevice;
+ (BOOL)is480Screen;
+ (BOOL)is568Screen;
+ (BOOL)is667Screen;
+ (BOOL)is736Screen;
+ (BOOL)isScreenWidthLarge320;
+ (BOOL)isIpadProDevice;
+ (id)idfaString;
+ (float)OSVersionNumber;
+ (BOOL)isIPhoneXSeries;
+ (BOOL)isIPhoneXDevice;
+ (id)idfvString;
+ (double)ssOnePixel;
+ (long long)getTotalDiskSpace;
+ (unsigned long long)currentSplitScreenWithSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })resolution;
+ (struct CGSize { double x0; double x1; })windowSize;
+ (long long)getFreeDiskSpace;
+ (id)platformName;
+ (double)screenScale;
+ (id)currentLanguage;
+ (id)mainWindow;

@end
