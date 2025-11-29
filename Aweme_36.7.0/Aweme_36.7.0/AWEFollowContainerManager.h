@class NSString;

@interface AWEFollowContainerManager : NSObject <AWEFollowContainerManagerProtocol>

@property (nonatomic) BOOL enableFollowContainerIndependentVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEConcernModuleServiceDOUYINHTSAdaperClass;
+ (id)shareInstance;

- (id)getFollowContainerViewControllerWithInitialConfig:(id)a0;
- (BOOL)enableFollowContainer;
- (id)getHTSFollowViewController;
- (BOOL)shouldUseHTSFollowStyle;
- (Class)getFollowFeedGroupControllerFactoryClass;
- (id)aAWEConcernModuleServiceDOUYINHTSAdaper;
- (id)getFollowFeedTableViewController;
- (id)init;

@end
