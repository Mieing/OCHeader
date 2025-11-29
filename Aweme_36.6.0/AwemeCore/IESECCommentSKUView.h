@class IESECCommentSKUContentViewModel, IESECHighlightButton, IESECCommentSKUViewModel, NSString, IESECSKUContentView;
@protocol IESECCommentSKUViewDelegate;

@interface IESECCommentSKUView : UIView <IESECSKUContentViewDelegate>

@property (retain, nonatomic) IESECCommentSKUViewModel *model;
@property (retain, nonatomic) IESECSKUContentView *contentView;
@property (retain, nonatomic) IESECCommentSKUContentViewModel *contentViewModel;
@property (retain, nonatomic) IESECHighlightButton *confirmButton;
@property (weak, nonatomic) id<IESECCommentSKUViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupMasonry;
- (void)reloadSKUView;
- (void)skuSelectChanged:(id)a0;
- (void)openCouponPanel;
- (void)openPOIListWithURLString:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 skuModel:(id)a1;
- (void)clearSKURecord;
- (void).cxx_destruct;
- (void)confirm;

@end
