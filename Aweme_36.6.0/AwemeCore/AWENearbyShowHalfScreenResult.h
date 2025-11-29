@class NSString, AWENearbyHalfScreenContainerModel, UIViewController;

@interface AWENearbyShowHalfScreenResult : NSObject

@property (weak, nonatomic) AWENearbyHalfScreenContainerModel *halfScreenContainerModel;
@property (nonatomic) BOOL success;
@property (weak, nonatomic) UIViewController *containerVC;
@property (copy, nonatomic) NSString *errMsg;
@property (copy, nonatomic) id /* block */ showCompletion;
@property (copy, nonatomic) id /* block */ closeHandler;

- (void).cxx_destruct;

@end
