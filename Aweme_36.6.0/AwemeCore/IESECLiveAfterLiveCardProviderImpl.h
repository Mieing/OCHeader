@class IESECLiveContext, NSString, IESECTracker;
@protocol IESECShopAfterLiveCardProviderService, IESECWindowAfterLiveCardProviderService;

@interface IESECLiveAfterLiveCardProviderImpl : NSObject <IESECLiveAfterLiveCardProvider> {
    id<IESECShopAfterLiveCardProviderService> _shopProvider;
    id<IESECWindowAfterLiveCardProviderService> _windowProvider;
}

@property (retain, nonatomic) IESECTracker *tracker;
@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)afterLiveCardWithData:(id)a0 container:(id)a1;
- (void).cxx_destruct;

@end
