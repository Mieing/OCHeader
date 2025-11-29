@class NSString, NSMutableDictionary;

@interface AWEExpInteractiveAngleService : HTSService <AWEExpInteractiveAngleService>

@property (retain, nonatomic) NSMutableDictionary *configDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBusinessConfig:(id)a0;
- (void)setUpInteractiveAngleConfig;
- (BOOL)enableExitGestureAdjustWithReferString:(id)a0;
- (BOOL)shouldExitWithReferString:(id)a0 panGesture:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
