@class UIImageView, RedeemTypeList, UILabel, UIView;
@protocol WCPayLQTRedeemTypeCellDelegate;

@interface WCPayLQTRedeemTypeCell : UIView

@property (retain, nonatomic) UILabel *m_titleLabel;
@property (retain, nonatomic) UILabel *m_desLabel;
@property (retain, nonatomic) UIView *m_lineView;
@property (retain, nonatomic) UIImageView *m_selectedIcon;
@property (retain, nonatomic) RedeemTypeList *m_data;
@property (nonatomic) BOOL m_selected;
@property (nonatomic) BOOL m_disable;
@property (nonatomic) BOOL m_highlight;
@property (nonatomic) BOOL m_defaultSelected;
@property (weak, nonatomic) id<WCPayLQTRedeemTypeCellDelegate> m_delegate;

- (double)layoutForKey:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onTap;
- (void)updateView;
- (void)adjustHeight;
- (void)updateTitleLabel;
- (void)updateDesLabel;
- (void)updateSelectIcon;
- (void)updateLineView;
- (void)updateMaskView;
- (void)layoutSubviews;
- (void)updateRedeemTypeList:(id)a0 selected:(BOOL)a1 disable:(BOOL)a2 highlight:(BOOL)a3 defaultSelect:(BOOL)a4;
- (void).cxx_destruct;

@end
