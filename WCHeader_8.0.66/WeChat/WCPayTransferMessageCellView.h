@class NSString, UIImageView, WCPayTransferMessageViewModel;

@interface WCPayTransferMessageCellView : WCPayBaseMessageCellView

@property (readonly, nonatomic) WCPayTransferMessageViewModel *viewModel;
@property (retain, nonatomic) NSString *bgImageName;
@property (retain, nonatomic) NSString *bgHighlightImageName;
@property (retain, nonatomic) NSString *maskImageName;
@property (retain, nonatomic) NSString *maskHighlightImageName;
@property (retain, nonatomic) UIImageView *addressIconImgView;

- (void)layoutContentView;
- (void)initTitleLabel;
- (void)updateStatus;
- (void)layoutGroupTransferContentView;
- (void)updateTitleLabel;
- (void)updateDescLabel;
- (void)updateAddressIconImgView;
- (void)updateBgImageView;
- (BOOL)canShowRevokeMsgMenuItem;
- (id)operationMenuItems;
- (void)initSourceViewInside;
- (void).cxx_destruct;

@end
