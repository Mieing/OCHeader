@class UILabel, UIView, WCPayOverseaTypeInfoObject;

@interface WCPayOverseaMainWalletHeaderView : UICollectionReusableView

@property (retain, nonatomic) WCPayOverseaTypeInfoObject *m_typeInfo;
@property (retain, nonatomic) UILabel *m_titleLabel;
@property (retain) UIView *m_backgroundView;

- (id)init;
- (void)layoutSubviews;
- (void)updateViewData;
- (void)updateBackgroundView;
- (void)updateTitleLabel;
- (void)updateTypeInfo:(id)a0;
- (id)contentAccessbilityLabel;
- (void).cxx_destruct;

@end
