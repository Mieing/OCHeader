@class NSNumber, NSString;

@interface AWEOpenPlatformIMShareGameInvitationInfo : NSObject

@property (nonatomic) unsigned long long roomState;
@property (retain, nonatomic) NSNumber *roomTotalNum;
@property (retain, nonatomic) NSNumber *roomCurNum;
@property (retain, nonatomic) NSNumber *appId;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *downloadSchema;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *linkId;
@property (copy, nonatomic) NSString *coverImg;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSNumber *shareVersion;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) NSString *detailString;
@property (nonatomic) BOOL shouldRefreshStatus;
@property (nonatomic) unsigned long long refreshTimeIntervalType;
@property (nonatomic) BOOL shouldCheckAppExists;
@property (nonatomic) BOOL shouldOpenGameStation;
@property (nonatomic) unsigned long long schemeType;
@property (nonatomic) unsigned long long schemeAdjustType;
@property (nonatomic) unsigned long long gameType;
@property (copy, nonatomic) NSString *uid;

- (void).cxx_destruct;

@end
