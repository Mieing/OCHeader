@interface AWEUGCampaignPlayInteractionController : AWEPlayInteractionNewBaseController

@property (nonatomic) double leftContainerMinY;
@property (nonatomic) double rightContainerMinY;

+ (BOOL)shouldActivateControllerWithModel:(id)a0 context:(id)a1 container:(id)a2;
+ (unsigned long long)controllerLazyLoadStrategy;

- (void)setHide:(BOOL)a0;
- (void)cellDidFullyDisplay:(id)a0 forRowAtIndexPath:(id)a1;
- (void)removeControllerFromSuperView;
- (void)setData:(id)a0;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)reset;
- (void)viewDidLoad;

@end
