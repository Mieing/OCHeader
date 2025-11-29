@interface AWEXPlayOrientationManager : NSObject

+ (void)interfaceOrientationAdaptToMask:(unsigned long long)a0;
+ (void)interfaceOrientationAdaptTo:(long long)a0;
+ (Class)aAWEPadBizUIAdapterClass;
+ (unsigned long long)supportOrientationMask;
+ (void)setSupportOrientationMask:(unsigned long long)a0;
+ (BOOL)shouldAutorotateToSupportedOrientationMask:(unsigned long long)a0;
+ (long long)interfaceOrientation;

- (id)aAWEPadBizUIAdapter;

@end
