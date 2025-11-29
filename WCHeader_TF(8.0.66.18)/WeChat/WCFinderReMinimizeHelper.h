@class NSValue, UIViewController;

@interface WCFinderReMinimizeHelper : NSObject

@property (weak, nonatomic) UIViewController *relativeVC;
@property (copy, nonatomic) id /* block */ createTransationBlock;
@property (copy, nonatomic) id /* block */ validChecker;
@property (retain, nonatomic) NSValue *floatingViewFrame;

- (void).cxx_destruct;

@end
