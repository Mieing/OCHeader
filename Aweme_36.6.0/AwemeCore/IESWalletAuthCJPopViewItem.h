@class UIView;

@interface IESWalletAuthCJPopViewItem : IESWalletPopViewModel

@property (nonatomic) BOOL enableCloseOnBlank;
@property (nonatomic) BOOL enableCloseBtn;
@property (nonatomic) BOOL enableConfirmBtn;
@property (copy, nonatomic) id /* block */ confirmCallBack;
@property (copy, nonatomic) id /* block */ closeCallBack;
@property (retain, nonatomic) UIView *headView;
@property (retain, nonatomic) UIView *mainView;

- (void).cxx_destruct;
- (id)init;

@end
