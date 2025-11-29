@interface AWEIMStorageCleanPromptManager : NSObject

+ (void)cleanIfNeededForDBFullError;
+ (BOOL)shouldShowDiskFullAlter;
+ (void)refreshFreeDiskSpaceCompletion:(id /* block */)a0;
+ (void)showDiskFullPreventMaskView;
+ (void)hidePreventMaskView;
+ (id)showDiskFullCleanPopupView;
+ (BOOL)shouldShowStorageCleanPromptPopupView;
+ (void)showStorageCleanPromptPopupView;
+ (id)cleanConfigs;
+ (void)liteCleanCache;
+ (void)_aweLazyRegisterLoadWhenDylibLoad;
+ (void)cleanIfNeededForDiskFull;
+ (double)getFreeDiskSpace;

@end
