@class NSString, CJPayMultifunctionalAttributeLabel, UILabel, CJPayServiceDetailItemModel;

@interface CJPayServiceDetailItemSimpleView : UIView <CJPayServiceDetailItemViewProtocol>

@property (retain, nonatomic) CJPayMultifunctionalAttributeLabel *contentLabel;
@property (retain, nonatomic) CJPayServiceDetailItemModel *itemModel;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupUI;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
