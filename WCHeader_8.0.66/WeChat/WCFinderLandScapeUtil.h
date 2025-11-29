@interface WCFinderLandScapeUtil : NSObject

+ (struct CGPoint { double x0; double x1; })mediaPositionithMediaInfo:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1 targetSize:(struct CGSize { double x0; double x1; })a2 isLandScape:(BOOL)a3 isSubScene:(BOOL)a4 attrFuncFlag:(unsigned int)a5;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaFrameWithMediaInfo:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1 isLandScape:(BOOL)a2 isSubScene:(BOOL)a3 attrFuncFlag:(unsigned int)a4;
+ (struct WCShowArea { double x0; double x1; double x2; double x3; })getPlayerViewShowAreaWithMediaInfo:(id)a0 isLandScape:(BOOL)a1;

@end
