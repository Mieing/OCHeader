@class NSString, NSMapTable;

@interface IESECLiveTaskHelper : NSObject <IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) NSMapTable *taskBannersMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)removeTaskBannerWithContainerID:(id)a0;
+ (void)handleTaskIfNeeded:(id)a0 roomID:(id)a1 logExtra:(id)a2 isFirstIn:(BOOL)a3 openWithSaaS:(BOOL)a4;
+ (id)keyWithTaskEnterFrom:(id)a0 taskType:(id)a1;
+ (void)getTaskBannerWithModel:(id)a0 completion:(id /* block */)a1;
+ (id)getTaskBannerWithContainerID:(id)a0;
+ (id)sharedInstance;

- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0 withContainerID:(id)a1;
- (void)adjustTaskViewFrame:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 inContainer:(id)a2;
- (void).cxx_destruct;

@end
