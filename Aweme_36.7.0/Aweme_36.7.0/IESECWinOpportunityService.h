@class IESECWinContext, NSString, NSHashTable;

@interface IESECWinOpportunityService : NSObject <IESECWinOpportunityService>

@property (weak, nonatomic) IESECWinContext *context;
@property (retain, nonatomic) NSHashTable *hashTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerOpportunity:(id)a0;
- (void)exitWindow;
- (void)tabViewController_viewWillAppear:(BOOL)a0;
- (void)tabViewController_viewWillDisappear:(BOOL)a0;
- (void)transpondMessage:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
