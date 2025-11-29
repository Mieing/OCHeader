@class NSString, UIViewController;

@interface AWEPadSplitAnnieXViewController : AWEPadSplitViewSecondaryContent <BDXPageDelegate>

@property (retain, nonatomic) UIViewController *annieXContainer;
@property (copy, nonatomic) NSString *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)extraTrackParams;
- (BOOL)pageCustomClose:(id)a0;
- (id)splitViewScene;
- (id)initWithAnnieXContainer:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
