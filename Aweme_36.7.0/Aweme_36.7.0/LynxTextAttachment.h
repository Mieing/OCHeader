@interface LynxTextAttachment : NSTextAttachment

@property (nonatomic) long long sign;
@property (nonatomic) long long verticalAlign;
@property (nonatomic) double verticalAlignLength;

- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1 characterIndex:(unsigned long long)a2;

@end
