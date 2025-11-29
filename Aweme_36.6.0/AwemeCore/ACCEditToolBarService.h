@class ACCCameraSubscription, NSDictionary, NSString;

@interface ACCEditToolBarService : NSObject <ACCEditToolBarServiceProtocol>

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (copy, nonatomic) NSDictionary *barItemsCacheMap;
@property (copy, nonatomic) NSDictionary *itemViewsCacheMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewWithBarItemID:(void *)a0;
- (void)updateBarItemWithItemId:(void *)a0;
- (void)notifyDidConfirmSubBarItems:(id)a0;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;

@end
