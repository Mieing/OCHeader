@class UIViewController, NSString, IESServiceProvider, AWEDetailTrendTracker, AWEDetailTrendViewModel;

@interface AWEDetailVideoTrendCollectionServiceImpl : NSObject <AWEDetailCollectService>

@property (weak, nonatomic) AWEDetailTrendViewModel *context;
@property (weak, nonatomic) AWEDetailTrendTracker *tracker;
@property (weak, nonatomic) IESServiceProvider *serviceProvider;
@property (weak, nonatomic) UIViewController *host;
@property (nonatomic) BOOL enableShowToastAfterCollect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
