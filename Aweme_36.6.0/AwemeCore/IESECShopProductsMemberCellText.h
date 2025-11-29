@class UILabel, UIImageView, IESECShopMemberTextLabelItem;

@interface IESECShopProductsMemberCellText : UIView {
    IESECShopMemberTextLabelItem *_model;
    double _expectWidth;
    BOOL _reLayout;
}

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (copy, nonatomic) id /* block */ labelCompressedCallBack;

- (id)attrDictWithFontSize:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)updateWithModel:(id)a0;
- (void)setUpView;

@end
