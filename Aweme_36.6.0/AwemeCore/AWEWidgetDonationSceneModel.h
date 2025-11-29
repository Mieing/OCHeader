@class NSString, NSArray;

@interface AWEWidgetDonationSceneModel : NSObject

@property (copy, nonatomic) NSString *widgetKind;
@property (copy, nonatomic) NSArray *trackerNameConditions;
@property (copy, nonatomic) NSArray *ignoreConditions;

- (void).cxx_destruct;

@end
