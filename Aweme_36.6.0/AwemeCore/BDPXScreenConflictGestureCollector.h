@class NSMutableSet;

@interface BDPXScreenConflictGestureCollector : NSObject

@property (retain, nonatomic) NSMutableSet *gestureSet;
@property (retain, nonatomic) NSMutableSet *viewSet;

+ (id)sharedInstance;

- (void)collectGesture:(Class)a0;
- (void)collectView:(Class)a0;
- (BOOL)gestureViewOrSuperViewInViewSet:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)shouldRequireFailureOfGestureRecognizer:(id)a0;

@end
