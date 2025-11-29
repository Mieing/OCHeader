@class NSString, NSArray;

@interface AWEWidgetDonationTrackerConditionModel : NSObject

@property (copy, nonatomic) NSString *trackerEvent;
@property (copy, nonatomic) NSArray *orConditions;
@property (copy, nonatomic) NSArray *ignoreConditions;

- (void).cxx_destruct;

@end
