@class NSMutableDictionary;

@interface _IESLiveSharedSubscriber : NSObject

@property (retain, nonatomic) NSMutableDictionary *subscribeUtilMap;

+ (id)sharedInstance;

- (id)subscribeUtilForIdentifier:(id)a0;
- (id)addSubscribeUtil:(id)a0 forIdentifier:(id)a1;
- (void)removeSubscriberUtilForIdentifier:(id)a0;
- (void).cxx_destruct;

@end
