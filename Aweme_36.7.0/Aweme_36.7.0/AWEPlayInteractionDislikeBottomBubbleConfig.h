@class NSString, AWEAwemeModel, UIImage, UIViewController;

@interface AWEPlayInteractionDislikeBottomBubbleConfig : NSObject

@property (copy, nonatomic) NSString *toast;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UIViewController *targetVC;
@property (nonatomic) double autoDismissTime;
@property (nonatomic) unsigned long long buttonType;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *buttonActionSchema;
@property (nonatomic) BOOL dismissWhenClick;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } enlargeInsets;
@property (retain, nonatomic) UIImage *leftImage;
@property (copy, nonatomic) id /* block */ clickedBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (void).cxx_destruct;

@end
