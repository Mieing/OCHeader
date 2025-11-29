@class MMFlutterHybridNavPageState;

@interface FlutterPageStateDispacher : NSObject

@property (retain, nonatomic) MMFlutterHybridNavPageState *pageState;

- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)viewDidDisappear;
- (void).cxx_destruct;

@end
