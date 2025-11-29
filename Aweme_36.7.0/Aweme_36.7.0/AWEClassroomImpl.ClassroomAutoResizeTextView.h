@interface AWEClassroomImpl.ClassroomAutoResizeTextView : UITextView {
    void /* unknown type, empty encoding */ maxHeight;
    void /* unknown type, empty encoding */ minHeight;
    void /* unknown type, empty encoding */ markNeedsScrollToCaret;
}

@property (nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;

@end
