@class NSString, AWEGrouponHalfScreenContainerModel, UIViewController;

@interface AWEGrouponShowHalfScreenResult : NSObject

@property (weak, nonatomic) AWEGrouponHalfScreenContainerModel *halfScreenContainerModel;
@property (nonatomic) BOOL success;
@property (weak, nonatomic) UIViewController *containerVC;
@property (copy, nonatomic) NSString *errMsg;
@property (copy, nonatomic) id /* block */ showCompletion;
@property (copy, nonatomic) id /* block */ closeHandler;

- (void).cxx_destruct;

@end
