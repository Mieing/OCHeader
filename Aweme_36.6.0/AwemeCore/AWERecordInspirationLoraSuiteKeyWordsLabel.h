@class NSString, NSShadow, NSMutableParagraphStyle, YYAnimatedImageView;

@interface AWERecordInspirationLoraSuiteKeyWordsLabel : YYLabel

@property (nonatomic) double offset;
@property (retain, nonatomic) NSString *prefixString;
@property (nonatomic) unsigned long long ugcType;
@property (retain, nonatomic) YYAnimatedImageView *leftView;
@property (nonatomic) struct CGSize { double width; double height; } leftViewSize;
@property (retain, nonatomic) YYAnimatedImageView *truncationTokenView;
@property (nonatomic) struct CGSize { double width; double height; } rightViewSize;
@property (retain, nonatomic) NSShadow *shadow;
@property (retain, nonatomic) NSMutableParagraphStyle *paragraphStyle;
@property (nonatomic) double leftOffset;
@property (nonatomic) double rightOffset;

- (BOOL)needWrapLine:(id)a0 text:(id)a1;
- (BOOL)isAlphabet:(unsigned short)a0;
- (void).cxx_destruct;
- (void)layout;

@end
