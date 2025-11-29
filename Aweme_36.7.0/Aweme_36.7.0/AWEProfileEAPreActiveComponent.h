@class NSString, NSMutableSet;

@interface AWEProfileEAPreActiveComponent : AWEProfileEABaseController <AWEProfileEACardLifeCycleEvent>

@property (retain, nonatomic) NSMutableSet *hasActivedCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
