@interface AWEPlayInteractionElementPriorityMananger : NSObject

+ (id)elementsNeedCountHeight;
+ (BOOL)checkContextInvalid:(id)a0;
+ (BOOL)checkContainerInvalid:(id)a0;
+ (void)trackElementsAppearWithContainer:(id)a0 context:(id)a1;
+ (void)resetPriorityAvoidModel:(id)a0;
+ (void)setupPriorityAvoidTrack:(id)a0 context:(id)a1;

@end
