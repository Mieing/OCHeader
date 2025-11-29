@class NSMutableDictionary;

@interface AWENearbyGrouponFeedLynxPlugin : AWENearbyGrouponFeedBasePlugin

@property (retain, nonatomic) NSMutableDictionary *subscriberMap;

- (void)registerEventSubscribers;
- (void)removeEventSubscriber;
- (void)deleteCardHandler:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
