@interface AWEClassroomImpl.ClassroomDetailLandscapeNavigationController : UINavigationController {
    void /* unknown type, empty encoding */ supportOrientation;
    void /* unknown type, empty encoding */ forbiddenAutorotate;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) BOOL shouldAutorotate;

- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (id)initWithRootViewController:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
