@interface AWEFeedMultiDeviceVideoPlaySyncConfig : NSObject

+ (BOOL)enableUnifySync;
+ (BOOL)shouldAllowManualSyncForPc;
+ (BOOL)pcResumeForShareEnable;
+ (BOOL)shouldAllowManualSync;
+ (BOOL)multiDeviceSyncUnifyEnable;
+ (long long)videoPlaySecond;
+ (long long)videoPlayLeft;
+ (BOOL)enableVideoAutoRecordV2;
+ (long long)videoAutoRecordPlayProgress;
+ (id)videoAutoRecordExcludeAwemeType;
+ (id)videoAutoRecordCategories;
+ (Class)aAWEFeedMultiDevicePlaySyncAdapterClass;
+ (BOOL)pcResumeForLongPressEnable;
+ (BOOL)multiDeviceSyncVideoSwapPositionEnable;
+ (id)multiDeviceSyncUnifyPosition;
+ (long long)pcResumeButtonPosConfig;
+ (BOOL)enableSync;
+ (id)pcResumeForLongPressConfig;
+ (id)multiDeviceSyncUnifyConfig;
+ (id)enableAutoRecordV2;
+ (id)multiDeviceSyncSceneConfig;
+ (id)multiDeviceSyncVideoScanConfig;
+ (BOOL)shouldAllowAutoRecord;
+ (BOOL)shouldAllowAutoPlay;
+ (long long)noticeDuration;
+ (long long)noticeDenyTime;
+ (long long)strikeTimeStart;
+ (long long)strikeTimeEnd;
+ (long long)launchCheckerTimer;
+ (BOOL)enableWarmQuery;
+ (BOOL)debugNOchecker;
+ (BOOL)shouldAllowAutoRecordToPc;
+ (id)multiDeviceSyncSceneList;
+ (id)multiDeviceSyncVideoTypeList;
+ (BOOL)multiDeviceSyncVideoPortraitScanEnable;
+ (BOOL)multiDeviceSyncVideoLandscapeScanEnable;
+ (BOOL)multiDeviceSyncVideoHandoffManualEnable;
+ (BOOL)multiDeviceSyncVideoHandoffAutoEnable;
+ (id)configDict;
+ (long long)noticeType;

- (id)aAWEFeedMultiDevicePlaySyncAdapter;

@end
