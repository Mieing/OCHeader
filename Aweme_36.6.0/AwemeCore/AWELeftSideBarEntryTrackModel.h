@class NSString, NSDictionary;

@interface AWELeftSideBarEntryTrackModel : NSObject

@property (copy, nonatomic) NSString *identification;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *entranceStatus;
@property (copy, nonatomic) NSString *homepageHotScene;
@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSString *bizId;
@property (copy, nonatomic) NSString *schemaId;
@property (nonatomic) long long lastLottieTime;
@property (nonatomic) long long lastAnimateTime;
@property (nonatomic) long long lastBadgeTime;
@property (copy, nonatomic) NSString *entryBadgeComponentID;
@property (copy, nonatomic) NSDictionary *bizTrackParams;
@property (copy, nonatomic) NSDictionary *reopenTrackParams;

- (void).cxx_destruct;

@end
