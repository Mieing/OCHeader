@interface AWEHPMainThreadChecker : NSObject

+ (BOOL)isCheckEnabled;
+ (BOOL)shouldTrackWithCustomEnableTrack:(BOOL)a0 fileName:(id)a1 funcName:(id)a2;
+ (BOOL)shouldContainStackWithFileName:(id)a0 funcName:(id)a1;
+ (int)stackInfoStartIndex;
+ (int)stackInfoDepth;
+ (id)trackBlackSet;
+ (BOOL)isContainStackInfoEnabled;
+ (id)containStackInfoWhiteSet;
+ (id)mainThreadCheckConfig;
+ (void)checkWithFileName:(const char *)a0 funcName:(const char *)a1 enableAssert:(BOOL)a2 enableTrack:(BOOL)a3;
+ (BOOL)isTrackEnabled;

@end
