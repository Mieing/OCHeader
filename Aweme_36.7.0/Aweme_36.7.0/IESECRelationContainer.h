@class IESECRelationPageContext, NSString, IESECRelationControllerManager;

@interface IESECRelationContainer : UIViewController <IESECRelationContainerProtocol>

@property (retain, nonatomic) IESECRelationPageContext *pageContext;
@property (retain, nonatomic) IESECRelationControllerManager *controllerManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createControllerManager;
- (void)loadControllerManager;
- (id)createPageContext;
- (void)pagerViewDidLayoutSubviews:(id)a0;
- (void)pagerViewDidReload:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
