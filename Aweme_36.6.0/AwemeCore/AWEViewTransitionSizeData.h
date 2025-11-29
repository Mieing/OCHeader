@protocol UIViewControllerTransitionCoordinator;

@interface AWEViewTransitionSizeData : NSObject

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (retain, nonatomic) id<UIViewControllerTransitionCoordinator> coordinator;

- (void).cxx_destruct;

@end
