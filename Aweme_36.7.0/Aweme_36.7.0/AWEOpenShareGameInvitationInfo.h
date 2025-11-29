@class NSString, NSNumber, NSDictionary;

@interface AWEOpenShareGameInvitationInfo : NSObject

@property (copy, nonatomic) NSString *clientKey;
@property (nonatomic) unsigned long long invitationType;
@property (nonatomic) unsigned long long roomState;
@property (retain, nonatomic) NSNumber *roomTotalNum;
@property (retain, nonatomic) NSNumber *roomCurNum;
@property (copy, nonatomic) NSString *userOpenId;
@property (copy, nonatomic) NSString *inviteeOpenId;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *linkId;
@property (copy, nonatomic) NSNumber *appId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *coverImg;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *downloadSchema;
@property (copy, nonatomic) NSNumber *shareVersion;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSDictionary *cardTemplateInfo;

- (void).cxx_destruct;

@end
