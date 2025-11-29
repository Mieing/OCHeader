@class NSAttributedString;

@interface FlowKitBizUI.ExpandableLabel : UILabel {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ button;
    void /* unknown type, empty encoding */ ellipsis;
    void /* unknown type, empty encoding */ collapsedText;
    void /* unknown type, empty encoding */ linkHighlighted;
    void /* unknown type, empty encoding */ linkRect;
    void /* unknown type, empty encoding */ collapsedNumberOfLines;
    void /* unknown type, empty encoding */ collapsedLinkTextRange;
    void /* unknown type, empty encoding */ collapsedAttributedLink;
    void /* unknown type, empty encoding */ lineHeight;
}

@property (nonatomic, retain) NSAttributedString *attributedText;

- (void)didClickExpand:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
