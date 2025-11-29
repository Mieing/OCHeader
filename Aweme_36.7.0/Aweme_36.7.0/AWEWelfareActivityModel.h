@class NSString, NSNumber, NSArray;

@interface AWEWelfareActivityModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *projectDescription;
@property (retain, nonatomic) NSNumber *projectID;
@property (copy, nonatomic) NSString *projectName;
@property (copy, nonatomic) NSString *projectSchemaURL;
@property (copy, nonatomic) NSString *organizationShortName;
@property (copy, nonatomic) NSString *organizationUserID;
@property (copy, nonatomic) NSString *organizationSecUserID;
@property (retain, nonatomic) NSNumber *matchDonateMoney;
@property (copy, nonatomic) NSString *matchDonateSponsorName;
@property (copy, nonatomic) NSArray *matchDonateRange;
@property (retain, nonatomic) NSNumber *matchDonateUsedMoney;
@property (retain, nonatomic) NSNumber *matchDonateUserCount;
@property (nonatomic, getter=isMatchDonateNewUser) BOOL matchDonateNewUser;
@property (nonatomic) BOOL matchDonateExpired;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
