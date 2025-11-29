@class MMUIImageView, MMUIView, MMUIButton, MMUILabel;
@protocol MultiSelectMsgTipViewDelegate;

@interface MultiSelectMsgTipView : MMUIView {
    unsigned int m_selectMaxCount;
    BOOL m_isArrowUp;
    BOOL isDisableStatus;
    MMUIView *m_contentView;
    MMUIButton *m_bgButton;
    MMUILabel *m_titleLabel;
    MMUIImageView *m_arrowIcon;
}

@property (nonatomic) BOOL isDisableStatus;
@property (weak, nonatomic) id<MultiSelectMsgTipViewDelegate> delegate;

+ (id)showTipWithDelegate:(id)a0 parentView:(id)a1 selectMaxCount:(unsigned int)a2;
+ (double)getMultiSelectMsgTipViewHeight;

- (id)init;
- (void)initView;
- (void)performBgAction;
- (void)setContentHighlighted;
- (void)setContentNormal;
- (void)setArrowIconImage:(BOOL)a0;
- (id)getArrowIconImage;
- (id)getArrowIconImageColor;
- (void)updateMultiSelectMsgTipViewStatue:(BOOL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
