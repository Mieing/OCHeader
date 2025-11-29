@class UIButton, NSArray, NSString, UIView, UILabel, WCPayCss;
@protocol WCPayTransferDelayOptionViewDelegate;

@interface WCPayTransferDelayOptionView : WCPayNavigationView

@property (retain) NSArray *options;
@property unsigned int selected;
@property (retain) WCPayCss *css;
@property (retain) UIView *baseView;
@property (retain) UIView *container;
@property (retain) UILabel *titleLabel;
@property (retain) UIView *lineView;
@property (retain) UIView *cellContainer;
@property (retain) UIView *bottomContainer;
@property (retain) UIButton *cancelButton;
@property (retain) UIButton *confirmButton;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) UILabel *descLabel;
@property (weak) id<WCPayTransferDelayOptionViewDelegate> m_delegate;

- (id)initWithTitle:(id)a0 desc:(id)a1;
- (void)updateDelayOption:(id)a0 selected:(unsigned int)a1;
- (void)updateSubView;
- (void)layoutSubviews;
- (void)onTapEmpty;
- (void)updateBaseView;
- (void)updateContainer;
- (void)maskPanel;
- (void)updateTitleLabel;
- (void)updateDescLabel;
- (void)udpateLineView;
- (void)updateCellContainer;
- (void)onTapCell:(id)a0;
- (void)updateCell:(id)a0 selected:(unsigned int)a1;
- (void)updateBottomContainer;
- (void)updateCancelButton;
- (void)updateConfirmButton;
- (void)onTapCancel;
- (void)onTapConfirm;
- (void).cxx_destruct;

@end
