@class UIViewController;

@interface AWESearchDecoratorPublishProgressViewModuleContext : NSObject

@property (weak, nonatomic) UIViewController *bindUIViewController;
@property (copy, nonatomic) id /* block */ canBeginShowBlock;
@property (copy, nonatomic) id /* block */ addProgressViewInControllerBlock;
@property (copy, nonatomic) id /* block */ removeProgressViewInControllerBlock;
@property (copy, nonatomic) id /* block */ didClickBlock;
@property (copy, nonatomic) id /* block */ onProgressViewShowTrackBlock;
@property (copy, nonatomic) id /* block */ onProgressViewClickTrackBlock;

- (void).cxx_destruct;

@end
