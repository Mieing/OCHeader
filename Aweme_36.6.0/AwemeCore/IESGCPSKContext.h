@class NSString, IESGCPSKConfig, NSDictionary;

@interface IESGCPSKContext : NSObject

@property (readonly, nonatomic) long long innerRequestScene;
@property (readonly, copy, nonatomic) NSString *componentTypeString;
@property (retain, nonatomic) IESGCPSKConfig *config;
@property (copy, nonatomic) NSString *gameID;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *iOSAppID;
@property (copy, nonatomic) NSString *appScheme;
@property (copy, nonatomic) NSString *zlink;
@property (nonatomic) unsigned long long bizType;
@property (nonatomic) unsigned long long componentAction;
@property (nonatomic) unsigned long long componentType;
@property (nonatomic) unsigned long long promoteScene;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSString *promoterID;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *promoteInstanceID;
@property (copy, nonatomic) NSString *reserveId;
@property (nonatomic) int reserveType;
@property (copy, nonatomic) NSString *reserveVersionNum;
@property (copy, nonatomic) NSString *adPlanID;
@property (copy, nonatomic) NSString *creativeID;
@property (copy, nonatomic) NSString *isOtherChannel;
@property (nonatomic) BOOL isAds;
@property (copy, nonatomic) NSString *adLogExtra;
@property (nonatomic) long long sourceType;
@property (nonatomic) long long stockType;
@property (nonatomic) long long originalSystemOrigin;
@property (nonatomic) BOOL ifDou;
@property (copy, nonatomic) NSString *trafficSource;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) long long isRsvp;
@property (copy, nonatomic) NSString *officialEnterFrom;
@property (nonatomic) long long isLivecellReport;
@property (copy, nonatomic) NSString *enterSubMethod;
@property (copy, nonatomic) NSString *UGEnterFrom;
@property (copy, nonatomic) NSString *UGEnterMethod;
@property (copy, nonatomic) NSString *UGCenterLaunchFrom;
@property (copy, nonatomic) NSString *UGCenterLocation;
@property (copy, nonatomic) NSString *UGCenterScene;
@property (copy, nonatomic) NSDictionary *viewTrackInfo;

- (void)updateContextFromLiveInfoWithDIContext:(id)a0;
- (id)contextJson;
- (void)updateContextFromGameInfo:(id)a0;
- (void).cxx_destruct;

@end
