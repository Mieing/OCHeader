@class NSString, AWEFeedPOIDynamicCardController;

@interface AWEFeedPOIDynamicCardManager : NSObject <AWEFeedPOIDynamicCardManagerProtocol>

@property (retain, nonatomic) AWEFeedPOIDynamicCardController *poiCardDynamicVc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

@end
