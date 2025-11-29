@class CJPayStandardProtocolLabel, CJPayMultifunctionalAttributeLabel, NSString, UILabel, CJPayServiceDetailItemModel;

@interface CJPayServiceDetailItemV2View : UIView <CJPayServiceDetailItemViewProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CJPayStandardProtocolLabel *contentLabel;
@property (retain, nonatomic) CJPayMultifunctionalAttributeLabel *secondDescLabel;
@property (retain, nonatomic) CJPayServiceDetailItemModel *itemModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isExpand;
- (void)p_setupConstraints;
- (void)updateTitleLabelInFixedLength:(double)a0;
- (BOOL)p_needShowSecondLabel;
- (void)p_setupUI;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
