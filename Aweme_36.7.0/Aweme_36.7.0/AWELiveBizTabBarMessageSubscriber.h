@class NSString, AWETabbarLiveGuideBubbleManager;

@interface AWELiveBizTabBarMessageSubscriber : NSObject <AWEBizTabBarMessage, AWEBizTabBarLifeCycleMessage>

@property (retain, nonatomic) AWETabbarLiveGuideBubbleManager *liveGuideBubbleManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
