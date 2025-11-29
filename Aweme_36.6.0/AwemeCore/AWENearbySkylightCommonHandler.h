@protocol AWENearbySkyLightElementViewActionDelegate;

@interface AWENearbySkylightCommonHandler : NSObject

@property (nonatomic) long long pageType;
@property (weak, nonatomic) id<AWENearbySkyLightElementViewActionDelegate> delegate;

- (void)unregisterSubscriber;
- (id)initWithPageType:(long long)a0;
- (void)registerSubscribes;
- (void)__handleBroadCastNotification:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
