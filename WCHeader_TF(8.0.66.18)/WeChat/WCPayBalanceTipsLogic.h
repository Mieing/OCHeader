@class NSArray, NSString, UIView;

@interface WCPayBalanceTipsLogic : MMObject <MMTipsViewControllerDelegate> {
    UIView *m_containerView;
}

@property (retain, nonatomic) NSArray *m_arrItem;
@property (retain, nonatomic) NSString *m_nsTitle;
@property (retain, nonatomic) NSString *m_nsContent;
@property (retain, nonatomic) NSString *m_nsRemark;
@property (retain, nonatomic) NSString *m_nsLeftBtn;
@property (retain, nonatomic) NSString *m_nsRightBtn;
@property (copy, nonatomic) id /* block */ m_rightBtnBlock;
@property (copy, nonatomic) id /* block */ m_leftBtnBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0 content:(id)a1 remark:(id)a2 leftBtn:(id)a3 rightBtn:(id)a4 itemArr:(id)a5;
- (id)init;
- (void)setupContainerView;
- (id)genLabelWithFontSize:(int)a0 textColor:(id)a1;
- (void)show;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1;
- (void).cxx_destruct;

@end
