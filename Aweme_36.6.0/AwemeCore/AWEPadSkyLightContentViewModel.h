@class NSString, UIViewController, AWESkyLightContainerViewController;
@protocol AWEFeedTableViewControllerProtocol, AWEFeedTabItemViewControllerProtocol, AWESkyLightContainerConfigProtocol, AWESkyLightContainerViewModelProtocol;

@interface AWEPadSkyLightContentViewModel : NSObject <AWESkyLightContentViewModelProtocol>

@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol, AWEFeedTableViewControllerProtocol> *contentViewController;
@property (retain, nonatomic) id<AWESkyLightContainerConfigProtocol> config;
@property (weak, nonatomic) id<AWESkyLightContainerViewModelProtocol> containerViewModel;
@property (weak, nonatomic) AWESkyLightContainerViewController *skyLightVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)skyLightSatusChanged:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
