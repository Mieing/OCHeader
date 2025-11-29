@class NSString, NSMutableArray;

@interface WAAppTaskVersionFallBackMarkItem : NSObject

@property (copy, nonatomic) NSString *appid;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *instanceId;
@property (nonatomic) unsigned int targetAppVersion;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long debugModeType;
@property (nonatomic) unsigned long long updateStartTimeInMs;
@property (nonatomic) unsigned long long updatingScene;
@property (retain, nonatomic) NSMutableArray *needDownloadInfoDatas;
@property (retain, nonatomic) NSMutableArray *downloadSuccessInfoDatas;

- (void).cxx_destruct;

@end
