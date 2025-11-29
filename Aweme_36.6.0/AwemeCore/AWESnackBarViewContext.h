@class AWESnackBarView, NSString, UIImage, UIViewController;

@interface AWESnackBarViewContext : NSObject

@property (retain, nonatomic) UIImage *imageName;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double displayDuration;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *actionBtnTitle;
@property (retain, nonatomic) UIImage *actionBtnImage;
@property (copy, nonatomic) id /* block */ actionBtnPressBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) UIViewController *containerVC;
@property (retain, nonatomic) AWESnackBarView *bodyView;
@property (nonatomic) BOOL customDismissAction;
@property (nonatomic) BOOL isFirstLevelPage;
@property (nonatomic) BOOL actionBtnImageOnRight;

+ (id)instanceWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithBlock:(id /* block */)a0;

@end
