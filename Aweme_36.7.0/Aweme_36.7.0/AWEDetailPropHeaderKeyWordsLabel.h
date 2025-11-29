@class UIColor, NSString, NSShadow, NSMutableParagraphStyle, YYAnimatedImageView;

@interface AWEDetailPropHeaderKeyWordsLabel : YYLabel

@property (nonatomic) double offset;
@property (nonatomic) unsigned long long loraUgcType;
@property (retain, nonatomic) NSString *prefixText;
@property (retain, nonatomic) YYAnimatedImageView *leftView;
@property (nonatomic) struct CGSize { double width; double height; } leftViewSize;
@property (retain, nonatomic) YYAnimatedImageView *truncationTokenView;
@property (nonatomic) struct CGSize { double width; double height; } rightViewSize;
@property (retain, nonatomic) NSShadow *shadow;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) NSMutableParagraphStyle *paragraphStyle;
@property (nonatomic) double leftOffset;
@property (nonatomic) double rightOffset;

- (BOOL)needWrapLine:(id)a0 text:(id)a1;
- (BOOL)isAlphabet:(unsigned short)a0;
- (void).cxx_destruct;
- (void)layout;

@end
