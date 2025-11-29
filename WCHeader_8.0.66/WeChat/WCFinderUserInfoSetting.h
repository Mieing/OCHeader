@class WCFinderUserMentionModel, NSArray, DataCenterConfig, WCFinderUserMessage, NSString;

@interface WCFinderUserInfoSetting : NSObject <PBCoding>

@property (nonatomic) int unreadMessageCount;
@property (retain, nonatomic) WCFinderUserMentionModel *mentionModel;
@property (retain, nonatomic) WCFinderUserMessage *userMessage;
@property (nonatomic) BOOL shouldShowTimelineRedDot;
@property (nonatomic) BOOL shouldShowPersonCenterRedDot;
@property (retain, nonatomic) NSArray *notInterestedConfigArr;
@property (nonatomic) BOOL hasShowFindPostRedDot;
@property (nonatomic) BOOL hasShowCameraRedDot;
@property (nonatomic) BOOL hasShowLocationChangeTipsInProfile;
@property (nonatomic) BOOL isFinishShowTouchTips;
@property (nonatomic) long long touchTipsShouldTimes;
@property (nonatomic) BOOL hasShowDiscoveryFindPostRedDot;
@property (nonatomic) BOOL hasBuildFindPostRedDot;
@property (retain, nonatomic) DataCenterConfig *dataCenterConfig;
@property (retain, nonatomic) NSArray *slideUpGuideConfigArr;
@property (nonatomic) unsigned long long requestFansCacheDate;
@property (nonatomic) BOOL hasPostRealName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_unreadMessageCount;
+ (void)PBArrayAdd_mentionModel;
+ (void)PBArrayAdd_userMessage;
+ (void)PBArrayAdd_shouldShowTimelineRedDot;
+ (void)PBArrayAdd_notInterestedConfigArr;
+ (void)PBArrayAdd_shouldShowPersonCenterRedDot;
+ (void)PBArrayAdd_hasShowFindPostRedDot;
+ (void)PBArrayAdd_hasShowCameraRedDot;
+ (void)PBArrayAdd_hasShowLocationChangeTipsInProfile;
+ (void)PBArrayAdd_dataCenterConfig;
+ (void)PBArrayAdd_isFinishShowTouchTips;
+ (void)PBArrayAdd_touchTipsShouldTimes;
+ (void)PBArrayAdd_hasShowDiscoveryFindPostRedDot;
+ (void)PBArrayAdd_hasBuildFindPostRedDot;
+ (void)PBArrayAdd_slideUpGuideConfigArr;
+ (void)PBArrayAdd_requestFansCacheDate;
+ (void)PBArrayAdd_hasPostRealName;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
