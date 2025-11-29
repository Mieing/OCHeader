@class UIImageView, BDPCDDynamicCardUIFootNoteModel, BDPCDDynamicCardInsetsLabel;

@interface AWEECOMIMDynamicFootNoteView : UIView

@property (retain, nonatomic) BDPCDDynamicCardInsetsLabel *contentLabel;
@property (retain, nonatomic) UIImageView *leftIconView;
@property (retain, nonatomic) BDPCDDynamicCardUIFootNoteModel *itemModel;

- (void)bindItemModel:(id)a0 isBigStyle:(BOOL)a1;
- (void).cxx_destruct;
- (void)customInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
