@class NSString, NSAttributedString;

@interface IESLLTempoTextLineHeightAdaptation : NSObject <NSLayoutManagerDelegate>

@property (nonatomic) double calculatedLineSpacing;
@property (nonatomic) double halfLeading;
@property (nonatomic) double lineHeight;
@property (nonatomic) double maxLineAscender;
@property (nonatomic) double maxLineDescender;
@property (retain, nonatomic) NSAttributedString *attributedString;
@property (nonatomic) double baseline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)layoutManager:(id)a0 shouldSetLineFragmentRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 lineFragmentUsedRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 baselineOffset:(inout double *)a3 inTextContainer:(id)a4 forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5;

@end
