@class IESECCommentSKUViewModel, NSString, IESECCommentSKUConfirmBottom, IESECHighlightButton, IESECCommentSKUContentViewModel, NSMutableArray, IESECCommentNewSKUContentView, UILabel;
@protocol IESECCommentNewSKUViewDelegate;

@interface IESECCommentNewSKUView : UIView <IESECCommentNewSKUContentViewDelegate>

@property (retain, nonatomic) IESECCommentSKUViewModel *model;
@property (retain, nonatomic) IESECCommentSKUContentViewModel *contentViewModel;
@property (copy, nonatomic) NSString *productTitle;
@property (retain, nonatomic) UILabel *productTitleLabel;
@property (retain, nonatomic) IESECHighlightButton *closeButton;
@property (retain, nonatomic) UILabel *skuSelectedLabel;
@property (retain, nonatomic) IESECCommentNewSKUContentView *contentView;
@property (retain, nonatomic) IESECCommentSKUConfirmBottom *confirmButton;
@property (retain, nonatomic) IESECHighlightButton *reloadButton;
@property (retain, nonatomic) NSMutableArray *selectedElements;
@property (retain, nonatomic) NSMutableArray *deSelectedElements;
@property (retain, nonatomic) NSMutableArray *skuTagNames;
@property (weak, nonatomic) id<IESECCommentNewSKUViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tapCloseButton;
- (void)didTapCommentSKUCell;
- (void)setupMasonry;
- (void)reloadSKUView;
- (void)skuSelectChanged:(id)a0;
- (void)clearSKURecord;
- (void)initSelectSKUElement:(id)a0;
- (void)tapResetButton;
- (id)getSKUElementLabelText;
- (void)updateSelectedSKUElement:(id)a0;
- (void)didTapCommentSKUHeaderView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 skuModel:(id)a1 productTitle:(id)a2;
- (void).cxx_destruct;
- (void)confirm;

@end
