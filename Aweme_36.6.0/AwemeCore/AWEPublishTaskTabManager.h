@class NSString;

@interface AWEPublishTaskTabManager : NSObject <AWEPublishTaskMessage>

@property (nonatomic) BOOL isLandingFamiliarTabInHomepage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (Class)aAWEStudioDOUYINSSAdapterClass;
+ (id)sharedManager;

- (void)task:(id)a0 willAppendWithInfo:(id)a1;
- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (id)aAWEStudioDOUYINSSAdapter;
- (BOOL)p_oldNoLanding:(id)a0;
- (void)p_publishNolandingAndTransferToSchemaWithTask:(id)a0 willAppendWithInfo:(id)a1;
- (void)p_oldLandingWithTask:(id)a0 willAppendWithInfo:(id)a1;
- (BOOL)judgeIsNearbyTabSelected;
- (void)__openFootprintPageWithTargetItemType:(long long)a0;
- (void)__openCirclePageWithTargetItemType:(long long)a0 circleVC:(id)a1;
- (void)dealloc;

@end
