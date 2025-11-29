@class NSString;

@interface AWEShowPlayletCollectTaskDataService : NSObject <AWEShowPlayletCollectTaskDataServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)fetchPlayletWidgetInstalledRewardInfoWithTaskId:(id)a0 completion:(id /* block */)a1;
+ (void)fetchPlayletWidgetDesktopRewardInfoWithTaskId:(id)a0 completion:(id /* block */)a1;
+ (void)fetchPlayletTaskRewardInfoWithTaskId:(id)a0 completion:(id /* block */)a1;
+ (void)fetchPlayletWidgetDesktopFloatTipsInfoWithCompletion:(id /* block */)a0;


@end
