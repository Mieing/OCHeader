@interface LiteAppUtil : NSObject

+ (id)splitEntry:(id)a0 urlDecode:(BOOL)a1;
+ (BOOL)versionGreater:(id)a0 second:(id)a1;
+ (unsigned long long)genCurrentTimeInMs;
+ (id)getNetStr:(long long)a0;
+ (id)getiOSVersion;
+ (id)getDeviceIdentifier;
+ (double)getStatusBarHeight;
+ (id)getSystemFontSize;
+ (BOOL)getIsSystemBoldText;
+ (BOOL)fileExist:(id)a0;
+ (BOOL)deleteFile:(id)a0;

@end
