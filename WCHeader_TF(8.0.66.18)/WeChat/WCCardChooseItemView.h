@class UIImageView, WCCardChooseInfo;
@protocol WCCardChooseItemViewDelegate;

@interface WCCardChooseItemView : MMUIView {
    WCCardChooseInfo *_chooseInfo;
    BOOL _select;
    UIImageView *_checkBoxImgView;
}

@property (weak, nonatomic) id<WCCardChooseItemViewDelegate> delegate;

+ (double)heightForChooseItemView:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cardChooseInfo:(id)a1 delegate:(id)a2;
- (void)initView;
- (id)genCardBgView;
- (id)genLogoView;
- (void)onClickCell;
- (void)updateCellSelectStatus:(BOOL)a0;
- (void)genInvoiceView;
- (void).cxx_destruct;

@end
