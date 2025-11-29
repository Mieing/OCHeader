@interface BUScreenHelper : NSObject

+ (id)resolutionString;
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
+ (BOOL)isScreenWidthLarge320;
+ (BOOL)isIpadProDevice;
+ (id)displayDensity;
+ (struct CGSize { double x0; double x1; })screenSize;
+ (struct CGSize { double x0; double x1; })resolution;
+ (long long)getDeviceType;

@end
