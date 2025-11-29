@class NSString, UIView;
@protocol WCBaseInfoItemDelegate;

@interface WCBaseInfoItem : MMObject {
    UIView *m_superView;
    id<WCBaseInfoItemDelegate> m_delegate;
}

@property (retain, nonatomic) NSString *m_title;
@property (retain, nonatomic) NSString *m_tip;
@property (retain, nonatomic) NSString *m_key;
@property (retain, nonatomic) UIView *m_view;
@property (readonly, nonatomic) BOOL m_bEnable;
@property (nonatomic) BOOL m_bActive;
@property (copy, nonatomic) id /* block */ m_resignBlk;

- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSuperView:(id)a0;
- (void)setDelegate:(id)a0;
- (id)getValue;
- (void)setEnable:(BOOL)a0;
- (void)becomeFirstResponder;
- (void)resignFirstResponder;
- (id)initWithTitle:(id)a0 tip:(id)a1 key:(id)a2;
- (void)resignFirstResponderWithCompletion:(id /* block */)a0;
- (id)currentAccessibilityDesc;
- (void).cxx_destruct;

@end
