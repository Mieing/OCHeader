@class NSString;
@protocol AWEFollowFeedAlertShowDelegate;

@interface AWEFollowFeedWidgetGuideManager : NSObject <AWEFollowFeedAlertProtocol>

@property (weak, nonatomic) id<AWEFollowFeedAlertShowDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

@end
