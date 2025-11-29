@class _TtC13FlowMarkdownX16FlowMarkdownView;

@interface AWEECOMIMImpl.BDECIMFlowMarkdownView : UIView {
    void /* function */ urlClickBlock;
}

@property (nonatomic, readonly) _TtC13FlowMarkdownX16FlowMarkdownView *markdownView;
@property (nonatomic, copy) id /* block */ urlClickBlock;

+ (struct CGSize { double x0; double x1; })calculateSizeWithMessage:(id)a0 maxWidth:(double)a1 serviceType:(long long)a2;

- (void)updateOriginalMarkdownTextWithMessage:(id)a0 maxWidth:(double)a1 serviceType:(long long)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
