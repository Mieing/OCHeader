@interface AWEKnowledgeRichContentImpl.FullPageFeedContentCell : AWEKnowledgeSwiftBasic.FullPageBaseItemViewCell <UIGestureRecognizerDelegate, YYLabelAnimationDelegate> {
    void /* unknown type, empty encoding */ getContentAnimationBlock;
    void /* unknown type, empty encoding */ tapContentBlock;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentLabel;
}

- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)label:(id)a0 actionForLayer:(id)a1 forKey:(id)a2;
- (void)didTapContent;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
