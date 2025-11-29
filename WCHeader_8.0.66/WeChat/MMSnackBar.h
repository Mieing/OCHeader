@class NSOperation, MMSnackBarConfig, UIViewController;

@interface MMSnackBar : NSObject

@property (retain, nonatomic) MMSnackBarConfig *config;
@property (copy, nonatomic) id /* block */ actionHandlerBlock;
@property (copy, nonatomic) id /* block */ willAppearHandlerBlock;
@property (weak, nonatomic) UIViewController *currentViewController;
@property (retain, nonatomic) NSOperation *afterHideOperation;
@property (nonatomic) BOOL disableSnackBarCheck;

+ (id)snackBar;

- (id)init;
- (id /* block */)iconName;
- (id /* block */)titleStr;
- (id /* block */)numberOfTitleLines;
- (id /* block */)attrTitle;
- (id /* block */)loading;
- (id /* block */)block;
- (id /* block */)delayHideInterval;
- (id /* block */)actionIconName;
- (id /* block */)actionTitle;
- (id /* block */)actionAttrTitle;
- (id /* block */)voiceOverHint;
- (id /* block */)voiceOverLabel;
- (id /* block */)voiceOverAutoFocus;
- (id /* block */)bottomOffset;
- (id /* block */)currentVC;
- (id /* block */)actionHandler;
- (id /* block */)willAppearHandler;
- (id /* block */)enableMultiSnackBar;
- (id /* block */)showSnackBar;
- (id /* block */)updateSnackBar;
- (id /* block */)hideSnackBar;
- (void)privateShowSnackBar;
- (void)privateUpdateSnackBar;
- (void)privateHideSnackBar:(id /* block */)a0;
- (void)setInteractionEnabled;
- (void)setInteractionBlocked;
- (id)getCurrentTopViewController;
- (id)displayingSnackBarVC;
- (id /* block */)cleanSnackBar;
- (void).cxx_destruct;

@end
