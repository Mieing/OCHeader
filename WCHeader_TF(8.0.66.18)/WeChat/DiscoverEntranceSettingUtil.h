@interface DiscoverEntranceSettingUtil : NSObject

+ (BOOL)ReddotEnabledForEntranceType:(unsigned long long)a0;
+ (unsigned long long)CtrlFlagMaskForEntranceType:(unsigned long long)a0;
+ (void)updateLocalReddotEableValueToServerIfNeed;
+ (void)setDiscoverEtranceSettingFlagMask:(unsigned long long)a0 setOpen:(BOOL)a1 sync:(BOOL)a2;
+ (void)localSetDiscoverEtranceSettingFlagMask:(unsigned long long)a0 setOpen:(BOOL)a1;
+ (BOOL)enableShowFinderSwitch;
+ (BOOL)enableShowGameEntry;
+ (BOOL)enableShowWeappEntry;
+ (BOOL)shouldShowWeChatAuthorization;
+ (void)doKVReportForAction:(unsigned long long)a0;

@end
