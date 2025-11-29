@class UIView, NSString, AWEIMShapeView, AWEIMQuickInputViewController, AWEAwemeModel, UIImageView, AWEUserModel, NSDictionary, AWEIMAccessibilityMaskView, AWEIMUser, UILabel;
@protocol AWEIMShareModelProtocol, AWEIMQuickReplyViewControllerDelegate;

@interface AWEIMQuickReplyViewController : UIViewController <AWEIMQuickInputViewControllerDelegate, AWEIMQuickReplyViewControllerProtocol>

@property (retain, nonatomic) AWEIMAccessibilityMaskView *tapDismissView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) AWEIMShapeView *inputTopView;
@property (retain, nonatomic) UIImageView *awemeImageView;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) AWEIMQuickInputViewController *inputVC;
@property (nonatomic) BOOL isDismissing;
@property (retain, nonatomic) AWEIMUser *receiveUser;
@property (retain, nonatomic) NSString *receiveUserToSessionID;
@property (nonatomic) BOOL isSending;
@property (nonatomic) BOOL enableBigFont;
@property (nonatomic) BOOL preferredPureTextStyle;
@property (nonatomic) BOOL skipImageSet;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) id<AWEIMShareModelProtocol> shareModel;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (weak, nonatomic) id<AWEIMQuickReplyViewControllerDelegate> delegate;
@property (nonatomic) BOOL enableClearButton;
@property (copy, nonatomic) NSString *defaultContent;
@property (nonatomic) BOOL shieldShowInnerPush;
@property (copy, nonatomic) id /* block */ hintLabelBlock;
@property (copy, nonatomic) id /* block */ quickEmoticonTitleBlock;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *toUserId;
@property (copy, nonatomic) NSDictionary *activityTrackParams;
@property (nonatomic) long long defaultInputViewType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isInputViewShowing;

- (BOOL)canShowInnerPush;
- (void)didUpdateInputVCFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputViewType:(long long)a1;
- (void)didSendContent:(id)a0 textView:(id)a1 userInfo:(id)a2;
- (void)inputViewControllerDidChangeHeight:(id)a0;
- (void)inputViewController:(id)a0 growingTextViewDidChange:(id)a1;
- (void)tappedBlankMask;
- (void)inputViewControllerDidClearButton:(id)a0;
- (void)p_trackActivityDataIfNeededWithEvent:(id)a0 target:(id)a1;
- (BOOL)isPureTextStyle;
- (void)startStoryVideo:(id /* block */)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)dismissAnimated:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)loadView;
- (void)show;
- (void)viewWillDisappear:(BOOL)a0;
- (void)deviceOrientationDidChange:(id)a0;
- (void)updateDisplayName;
- (void)hideAnimated:(BOOL)a0 completion:(id /* block */)a1;

@end
