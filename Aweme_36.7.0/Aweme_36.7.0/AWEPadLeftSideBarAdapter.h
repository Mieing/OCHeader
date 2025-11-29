@class NSString;

@interface AWEPadLeftSideBarAdapter : NSObject <AWEPadLeftSideBarAdapter>

@property (readonly, nonatomic) BOOL enable;
@property (readonly, nonatomic) double leftSideBarWidth;
@property (readonly, nonatomic) double watchLaterLeftSideBarMaxWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;
+ (id)getAdapter;

- (void)setupBottomBarView;
- (void)performNormalExecution:(id /* block */)a0;
- (void)layoutSideBarTransition:(id)a0 originX:(double)a1;
- (void)updateBottomBarView:(BOOL)a0;
- (void)updateBottomBarViewAfterRotateTransition;
- (id)weakTarget;

@end
