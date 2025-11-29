@class CJPayServiceDetailModel, UIStackView;

@interface CJPayServiceDetailView : UIView

@property (retain, nonatomic) UIStackView *dynamicView;
@property (retain, nonatomic) CJPayServiceDetailModel *detailModel;

- (void)p_setupConstraints;
- (id)p_createDynamicViewList;
- (void)p_adjustServiceDetailItemViewInSameLength;
- (BOOL)p_checkItemModelCanUse:(id)a0;
- (void)p_setupUI;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)updateWithModel:(id)a0;

@end
