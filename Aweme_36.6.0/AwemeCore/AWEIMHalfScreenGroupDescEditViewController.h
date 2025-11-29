@class UITextView, NSString, NSDictionary, UIViewController;
@protocol IESIMGroupDescEditViewControllerDelegate;

@interface AWEIMHalfScreenGroupDescEditViewController : AWEIMGroupDescEditViewController <AWEIMViewControllerInHalfSceenProtocol, IESIMHalfScreenGroupDescEditViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESIMGroupDescEditViewControllerDelegate> delegate;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (weak, nonatomic) UIViewController *groupSettingVC;
@property (retain, nonatomic) UITextView *contentTextView;

- (double)minViewHeightForHalfScreen;
- (void)updateTemplateViewLayoutWithKeboardShow:(BOOL)a0 userInfo:(id)a1;
- (void)viewDidLoad;

@end
