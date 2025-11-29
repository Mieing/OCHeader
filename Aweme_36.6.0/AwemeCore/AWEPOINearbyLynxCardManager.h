@class NSString, AWEPOILynxContainerView;

@interface AWEPOINearbyLynxCardManager : NSObject <AWEPOICubeViewDelegate, AWEPOINearbyLynxCardManager>

@property (retain, nonatomic) AWEPOILynxContainerView *lynxView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupCardWithLynxModel:(id)a0 params:(id)a1 parentView:(id)a2;
- (void)broadcastEventWithParams:(id)a0;
- (void).cxx_destruct;

@end
