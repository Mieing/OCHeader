@class MMUILabel, NSString, UIView, UIButton;
@protocol SendThanksConfirmSheetViewDelegate;

@interface SendThanksConfirmSheetView : MMPageSheetBaseView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MMUILabel *titleView;
@property (retain, nonatomic) UIView *guideView;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) id<SendThanksConfirmSheetViewDelegate> delegate;
@property (retain, nonatomic) NSString *chatName;
@property (retain, nonatomic) NSString *giverNickName;
@property (nonatomic) BOOL isGroupChat;

- (void)showWithAnimated:(BOOL)a0 complete:(id /* block */)a1;
- (void)updateContentViewHeight;
- (void)initView;
- (void)initTitleView;
- (void)initGuideView;
- (void)initBottomView;
- (void)layoutUI;
- (void)onCancelButtonClick;
- (void)onConfirmButtonClick;
- (void)pageSheetWillCloseWithType:(long long)a0;
- (void).cxx_destruct;

@end
