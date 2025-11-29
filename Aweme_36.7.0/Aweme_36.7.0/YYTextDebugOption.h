@class UIColor;

@interface YYTextDebugOption : NSObject <NSCopying>

@property (retain, nonatomic) UIColor *baselineColor;
@property (retain, nonatomic) UIColor *CTFrameBorderColor;
@property (retain, nonatomic) UIColor *CTFrameFillColor;
@property (retain, nonatomic) UIColor *CTLineBorderColor;
@property (retain, nonatomic) UIColor *CTLineFillColor;
@property (retain, nonatomic) UIColor *CTLineNumberColor;
@property (retain, nonatomic) UIColor *CTRunBorderColor;
@property (retain, nonatomic) UIColor *CTRunFillColor;
@property (retain, nonatomic) UIColor *CTRunNumberColor;
@property (retain, nonatomic) UIColor *CGGlyphBorderColor;
@property (retain, nonatomic) UIColor *CGGlyphFillColor;

+ (id)sharedDebugOption;
+ (void)addDebugTarget:(id)a0;
+ (void)removeDebugTarget:(id)a0;
+ (void)setSharedDebugOption:(id)a0;

- (BOOL)needDrawDebug;
- (void).cxx_destruct;
- (void)clear;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
