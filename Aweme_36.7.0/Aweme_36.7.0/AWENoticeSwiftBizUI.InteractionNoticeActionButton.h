@interface AWENoticeSwiftBizUI.InteractionNoticeActionButton : UIButton {
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ didClickHandler;
    void /* unknown type, empty encoding */ normalTitle;
    void /* unknown type, empty encoding */ attentionTitle;
    void /* unknown type, empty encoding */ isAttentionState;
}

@property (nonatomic) BOOL highlighted;

- (void)didClickActionButton;
- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
