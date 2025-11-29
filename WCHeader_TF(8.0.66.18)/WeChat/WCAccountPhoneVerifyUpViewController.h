@class MMUILabel, WCRedesignInfoItem, NSDictionary, NSString, UIButton;
@protocol WCAccountPhoneVerifyUpViewControllerDelegate;

@interface WCAccountPhoneVerifyUpViewController : WCAccountBaseViewController <MFMessageComposeViewControllerDelegate> {
    id<WCAccountPhoneVerifyUpViewControllerDelegate> m_delegate;
}

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *subtitleLabel;
@property (retain, nonatomic) WCRedesignInfoItem *editSmsInfoItem;
@property (retain, nonatomic) WCRedesignInfoItem *sendToInfoItem;
@property (retain, nonatomic) UIButton *sendSmsButton;
@property (retain, nonatomic) UIButton *sentAndNextButton;
@property (retain, nonatomic) NSDictionary *storedTitleTextAttributes;
@property (nonatomic) long long storedBarStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)useSheetView;
- (BOOL)useRedesignStyle;
- (void)initNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)saveNavigationSetting;
- (void)recoverNavigationSetting;
- (void)onSend;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;

@end
