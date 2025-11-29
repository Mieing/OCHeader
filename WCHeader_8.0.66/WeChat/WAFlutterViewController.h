@class NSMutableSet, FlutterEngine;

@interface WAFlutterViewController : FlutterViewController

@property (retain, nonatomic) FlutterEngine *skylineEngine;
@property (retain, nonatomic) NSMutableSet *touchSet;
@property (nonatomic) BOOL isRealAppear;

- (id)initWithEngine:(id)a0 nibName:(id)a1 bundle:(id)a2;
- (void)detachFlutterEngine;
- (void)destroyFlutterEngine;
- (void)updateByUIWindow:(id)a0;
- (void)revertOpaque;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)cancelTouches;
- (void)dealloc;
- (void)keyboardWillChangeFrame:(id)a0;
- (void).cxx_destruct;

@end
