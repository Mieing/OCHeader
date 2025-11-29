@class NSString, CJPayMultifunctionalAttributeLabel, UILabel, CJPayServiceDetailItemModel;

@interface CJPayServiceDetailItemView : UIView <CJPayServiceDetailItemViewProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CJPayMultifunctionalAttributeLabel *descLabel;
@property (retain, nonatomic) CJPayServiceDetailItemModel *itemModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupConstraints;
- (void)updateTitleLabelInFixedLength:(double)a0;
- (void)p_setupUI;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
