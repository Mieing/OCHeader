@class NSString;

@interface AWEPCTTransitionAlbumTaskCreator : NSObject <AWEPCTBusinessTaskCreatorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createTaskWithContext:(id)a0;
+ (BOOL)judgeIsAllowUseUnsafeAlbumAPI:(id)a0;
+ (void)checkAIMemoriesPermissionIfNeededWithContext:(id)a0 finishHandler:(id /* block */)a1 completion:(id /* block */)a2;


@end
