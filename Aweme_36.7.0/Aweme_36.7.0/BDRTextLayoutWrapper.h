@class NSString, BDRTextLayout, NSAttributedString;
@protocol BDReaderTTLayoutPageProtocol;

@interface BDRTextLayoutWrapper : NSObject

@property (retain, nonatomic) id<BDReaderTTLayoutPageProtocol> ttLayout;
@property (retain, nonatomic) BDRTextLayout *bdrLayout;
@property (nonatomic) unsigned long long layoutEngine;
@property (readonly, copy, nonatomic) NSAttributedString *text;
@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } visibleRange;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } textBoundingSize;
@property (readonly, nonatomic) unsigned long long rowCount;
@property (copy, nonatomic) id /* block */ placeholderAttDrawBlock;
@property (copy, nonatomic) id /* block */ textColorDrawBlock;
@property (copy, nonatomic) id /* block */ linkColorDrawBlock;
@property (copy, nonatomic) id /* block */ backgroundColorDrawBlock;
@property (copy, nonatomic) id /* block */ borderColorDrawBlock;
@property (copy, nonatomic) id /* block */ backgroundImgDrawBlock;

+ (id)layoutWithContainerSize:(struct CGSize { double x0; double x1; })a0 text:(id)a1 layoutEngine:(unsigned long long)a2;
+ (id)layoutWithLayoutPage:(id)a0 layoutEngine:(unsigned long long)a1;
+ (id)layoutWithContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 text:(id)a1 layoutEngine:(unsigned long long)a2;
+ (id)layoutWithContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 content:(id)a1 layoutEngine:(unsigned long long)a2;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectWithLineIndex:(unsigned long long)a0;
- (BOOL)isParaEndWithLineIndex:(unsigned long long)a0;
- (BOOL)isParaBeginWithLineIndex:(unsigned long long)a0;
- (id)initWithContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 text:(id)a1 layoutEngine:(unsigned long long)a2;
- (id)initWithLayoutPage:(id)a0 layoutEngine:(unsigned long long)a1;
- (unsigned long long)positionWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeWithLineIndex:(unsigned long long)a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (id)selectionRectsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
