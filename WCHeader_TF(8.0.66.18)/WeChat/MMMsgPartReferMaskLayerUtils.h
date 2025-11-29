@interface MMMsgPartReferMaskLayerUtils : NSObject

+ (id)getPartReferMaskLayerWithRichTextView:(id)a0 referPartial:(id)a1;
+ (id)generateHeadBlurLayer:(id)a0 referPartial:(id)a1;
+ (id)generateTailBlurLayer:(id)a0 referPartial:(id)a1;
+ (id)calculateWhiteRegionsInContainer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 excludingFrames:(id)a1;

@end
