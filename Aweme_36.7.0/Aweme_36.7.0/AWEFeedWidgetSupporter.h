@class NSNumber, NSString;

@interface AWEFeedWidgetSupporter : NSObject

@property (retain, nonatomic) NSNumber *onceInstalled;
@property (copy, nonatomic) NSString *imageURLString;

+ (id)sharedInstance;

- (id)feedWidgetSetting;
- (void)reloadFeedWidgetDataIfNeeded;
- (void).cxx_destruct;

@end
