@class NSString;

@interface AWEACCCommerceServiceImpl : NSObject <ACCCommerceServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isFromMissionQuickStartWithPublishViewModel:(id)a0;
- (BOOL)shouldUseCommerceMusic;
- (void)runTasksWithContext:(id /* block */)a0 runTasks:(id)a1;
- (BOOL)isEnterFromECommerceProductShare:(id)a0;
- (BOOL)isEnterFromECommerceComment:(id)a0;
- (BOOL)needEnterECommerceEditController:(id)a0;

@end
