@class NSString, NSAttributedString;

@interface FlowUIKit.FlowBubbleBadge : UILabel {
    void /* unknown type, empty encoding */ fixedHeight;
    void /* unknown type, empty encoding */ fixedInset;
    void /* unknown type, empty encoding */ fontSize;
    void /* unknown type, empty encoding */ number;
}

@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) NSAttributedString *attributedText;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
