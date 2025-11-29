@class CJPayStandardKeyboardConfigModel;

@interface CJPayKeyboardContainerModel : NSObject

@property (retain, nonatomic) CJPayStandardKeyboardConfigModel *keyboardConfigModel;
@property (nonatomic) double keyboardWidth;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) double transAnimateDuration;
@property (nonatomic) BOOL enableLocalThemeAdapter;
@property (nonatomic) BOOL disableBottomSafeMargin;

- (void).cxx_destruct;

@end
