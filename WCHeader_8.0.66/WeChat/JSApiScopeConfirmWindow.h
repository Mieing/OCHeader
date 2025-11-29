@class NSString, NSArray;
@protocol JSApiScopeConfirmWindowDelegate;

@interface JSApiScopeConfirmWindow : MMUIWindow

@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *appIconURL;
@property (retain, nonatomic) NSArray *arrScopeInfo;
@property (retain, nonatomic) NSString *confirmTitle;
@property (nonatomic) unsigned long long orientationMask;
@property (weak, nonatomic) id<JSApiScopeConfirmWindowDelegate> confirmWindowDelegate;

- (void)setupView;
- (BOOL)shouldHandleStatusBarAppearance;
- (void).cxx_destruct;

@end
