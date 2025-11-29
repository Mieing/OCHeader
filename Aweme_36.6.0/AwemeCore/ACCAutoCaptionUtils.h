@interface ACCAutoCaptionUtils : NSObject

+ (id)lastTextStyle;
+ (void)setLastTextStyle:(id)a0;
+ (id)drawAlignmentCenterLineRectArray:(id)a0;
+ (id)uiImageWithCaptionModel:(id)a0 textInfoModel:(id)a1;
+ (id)fontWithFontModel:(id)a0 size:(double)a1;
+ (id)captionImageWithCaptionModel:(id)a0 textInfoModel:(id)a1 attributes:(id)a2 stroke:(id)a3 fillColor:(id)a4 screenScale:(double)a5;
+ (id)drawCaptionPathWithLineRectArray:(id)a0 fillColor:(id)a1 textStyle:(unsigned long long)a2;
+ (id)drawPlainRectangleWithRects:(id)a0;
+ (struct CGPoint { double x0; double x1; })topMidPointWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isBoundaryLine:(BOOL)a1;
+ (struct CGPoint { double x0; double x1; })leftTopWithRect_up:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isBoundaryLine:(BOOL)a1;
+ (struct CGPoint { double x0; double x1; })leftBottomWithRect_down:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isBoundaryLine:(BOOL)a1;
+ (struct CGPoint { double x0; double x1; })bottomMidPointWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isBoundaryLine:(BOOL)a1;
+ (struct CGPoint { double x0; double x1; })leftTopCenterWithRect_up:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isBoundaryLine:(BOOL)a1;
+ (struct CGPoint { double x0; double x1; })leftBottomCenterWithRect_down:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isBoundaryLine:(BOOL)a1;
+ (struct CGPoint { double x0; double x1; })leftTopWithRect_down:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isBoundaryLine:(BOOL)a1;
+ (struct CGPoint { double x0; double x1; })leftTopCenterWithRect_down:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isBoundaryLine:(BOOL)a1;
+ (struct CGPoint { double x0; double x1; })leftBottomWithRect_up:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isBoundaryLine:(BOOL)a1;
+ (struct CGPoint { double x0; double x1; })leftBottomCenterWithRect_up:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isBoundaryLine:(BOOL)a1;
+ (void)updateLineRectArrayAndFrameWithCaptionModel:(id)a0 textInfoModel:(id)a1;
+ (struct CGSize { double x0; double x1; })textSizeWithText:(id)a0 attributes:(id)a1 limitWidth:(double)a2 lineRectStringArray:(id)a3;
+ (void)cleanCaptionStickerBufferWithPublishModel:(id)a0 stickerId:(long long)a1;
+ (void)makeToSingleCaptionAtSameTimePointWthCaptions:(id)a0;
+ (id)veStickerImageWithCaptionModel:(id)a0 textInfoModel:(id)a1;
+ (void)updateCaptionLineRectForAllWithCaptions:(id)a0 style:(id)a1;

@end
