@class CJPayServiceDetailItemModel, NSString, UILabel, UIView, UIButton;

@interface CJPayServiceDetailItemMaskMsgShowView : UIView <CJPayServiceDetailItemViewProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *messageShowBgView;
@property (retain, nonatomic) UILabel *messageShowLabel;
@property (retain, nonatomic) UIButton *visibleControlButton;
@property (retain, nonatomic) CJPayServiceDetailItemModel *itemModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_toggleVisibility:(id)a0;
- (void)updateTitleLabelInFixedLength:(double)a0;
- (void)p_setupUI;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
