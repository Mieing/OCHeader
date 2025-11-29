@class NSString, UIViewController, UITextView;

@interface AWEIMHalfScreenGroupNoticeEditViewController : AWEIMGroupNoticeEditViewController <AWEIMViewControllerInHalfSceenProtocol, IESIMHalfScreenGroupNoticeEditViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController *groupSettingVC;
@property (retain, nonatomic) UITextView *contentTextView;

- (double)minViewHeightForHalfScreen;
- (void)updateTemplateViewLayoutWithKeboardShow:(BOOL)a0 userInfo:(id)a1;
- (void)viewDidLoad;

@end
