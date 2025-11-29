@class NSString;

@interface ACCAIGCUGCFusionCreationToolFactoryImpl : NSObject <ACCAIGCUGCFusionCreationToolFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)editCreationToolsViewContainerHeight;
- (id)editCreationToolsViewController;
- (double)editCreationToolsViewContainerTopPadding;
- (id)viewControllerWithPublishModel:(id)a0 isFollowShot:(BOOL)a1;
- (id)viewControllerWithPublishModel:(id)a0 customPath:(long long)a1;
- (id)viewControllerWithPublishModel:(id)a0 isFollowShot:(BOOL)a1 isPersonalPath:(BOOL)a2;

@end
