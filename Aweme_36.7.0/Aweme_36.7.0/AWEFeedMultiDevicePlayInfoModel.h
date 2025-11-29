@class NSString, NSDictionary, AWEAwemeModel, NSNumber, AWEFeedMultiDeviceVideoPlaySyncManager;

@interface AWEFeedMultiDevicePlayInfoModel : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModelNeedsSync;
@property (nonatomic) long long playTime;
@property (nonatomic) long long recordType;
@property (nonatomic) long long uploadScene;
@property (nonatomic) long long deviceID;
@property (nonatomic) long long userID;
@property (nonatomic) long long fromeDeviceType;
@property (nonatomic) long long receiveType;
@property (copy, nonatomic) NSDictionary *pointDataInfo;
@property (readonly, nonatomic) NSString *enterFromOnCellphone;
@property (readonly, nonatomic) NSString *previousPageOnCellphone;
@property (readonly, nonatomic) NSNumber *isLandscapeStatusOnCellphone;
@property (readonly, nonatomic) NSString *enterMethodOncCellphone;
@property (readonly, nonatomic) NSNumber *itemDuration;
@property (weak, nonatomic) AWEFeedMultiDeviceVideoPlaySyncManager *syncManager;

- (void).cxx_destruct;

@end
