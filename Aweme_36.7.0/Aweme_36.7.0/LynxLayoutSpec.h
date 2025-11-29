@class LynxTextStyle;
@protocol NSLayoutManagerDelegate;

@interface LynxLayoutSpec : NSObject

@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) long long widthMode;
@property (readonly, nonatomic) long long heightMode;
@property (readonly, nonatomic) unsigned long long textOverflow;
@property (readonly, nonatomic) long long overflow;
@property (readonly, nonatomic) unsigned long long whiteSpace;
@property (readonly, nonatomic) long long maxLineNum;
@property (readonly, nonatomic) long long maxTextLength;
@property (readonly, nonatomic) LynxTextStyle *textStyle;
@property (retain, nonatomic) id<NSLayoutManagerDelegate> layoutManagerDelegate;
@property (nonatomic) long long verticalAlign;
@property (readonly, nonatomic) BOOL enableTailColorConvert;
@property (nonatomic) BOOL enableTextNonContiguousLayout;
@property (nonatomic) BOOL enableTextRefactor;
@property (nonatomic) BOOL enableNewClipMode;
@property (nonatomic) long long textSingleLineVerticalAlign;
@property (nonatomic) BOOL enableTextLayoutCache;
@property (readonly, nonatomic) BOOL widthUndifined;
@property (readonly, nonatomic) BOOL heightUndifined;

- (BOOL)isEqualToSpec:(id)a0;
- (id)initWithWidth:(double)a0 height:(double)a1 widthMode:(long long)a2 heightMode:(long long)a3 textOverflow:(unsigned long long)a4 overflow:(long long)a5 whiteSpace:(unsigned long long)a6 maxLineNum:(long long)a7 maxTextLength:(long long)a8 textStyle:(id)a9 enableTailColorConvert:(BOOL)a10;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;

@end
