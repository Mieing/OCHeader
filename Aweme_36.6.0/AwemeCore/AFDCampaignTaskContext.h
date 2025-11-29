@class NSString, NSDictionary, UIViewController;

@interface AFDCampaignTaskContext : NSObject

@property (copy, nonatomic) NSString *activityID;
@property (copy, nonatomic) NSString *topic;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *taskToken;
@property (copy, nonatomic) NSString *buriedInfo;
@property (copy, nonatomic) NSDictionary *originalParams;
@property (weak, nonatomic) UIViewController *mainVenue;
@property (nonatomic) id host;

+ (id)contextFromDictionary:(id)a0;

- (void).cxx_destruct;
- (id)toDictionary;

@end
