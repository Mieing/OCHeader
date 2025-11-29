@class MMUITextField, NSString, UIView, UILabel;
@protocol WCFinderSpecialTopicCreateViewControllerDelegate;

@interface WCFinderHighlightTopicCreateViewController : MMPageSheetBaseViewController <MMUITextFieldDelegate>

@property (copy, nonatomic) NSString *originalHighlightTopicName;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MMUITextField *textFiled;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UILabel *wordCountLimitLabel;
@property (weak, nonatomic) id<WCFinderSpecialTopicCreateViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHighlightTopicName:(id)a0;
- (void)viewDidLoad;
- (void)setupPageSheetConfig;
- (void)setupSubViews;
- (void)viewWillLayoutSubviews;
- (BOOL)canPostEvent;
- (void)onClickRightBtn:(id)a0;
- (void)mmTextFieldDidChange:(id)a0;
- (void).cxx_destruct;

@end
