@class NSString, AWEUserModel, DUXContentSheet;

@interface AWEProfileRemindBannerCloseConfirmAlert : NSObject <AWEAlertProtocol>

@property (retain, nonatomic) DUXContentSheet *popUpSheet;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelBtnAction;
- (void)confirmBtnAction;
- (id)initWithTitle:(id)a0 subTitle:(id)a1 user:(id)a2;
- (void)showOnViewController:(id)a0 completion:(id /* block */)a1;
- (double)contentHeight;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
