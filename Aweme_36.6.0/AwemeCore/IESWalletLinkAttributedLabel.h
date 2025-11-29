@class UILabel, IESWalletLinkAttributedItem;
@protocol IESLiveURLSchemaHandler;

@interface IESWalletLinkAttributedLabel : UIView

@property (retain, nonatomic) IESWalletLinkAttributedItem *item;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> walletRouter;

- (double)contentHeight;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0;
- (void)setupUI;
- (void)handleTap:(id)a0;

@end
