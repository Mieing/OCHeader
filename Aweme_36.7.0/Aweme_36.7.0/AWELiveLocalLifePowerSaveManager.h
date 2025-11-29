@class NSString;

@interface AWELiveLocalLifePowerSaveManager : NSObject <AWELiveLocalLifePowerSaveProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)processNativeAppPowerSaveWithClearType:(unsigned long long)a0 fromShelfPage:(BOOL)a1;
+ (long long)transformFromLiveType:(unsigned long long)a0;
+ (BOOL)shelfPageIsShowNow;


@end
