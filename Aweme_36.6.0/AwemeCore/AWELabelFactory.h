@interface AWELabelFactory : NSObject

+ (id)labelWithText:(id)a0 font:(id)a1 textColor:(id)a2;
+ (id)labelWithText:(id)a0 systemFontOfSize:(double)a1 weight:(long long)a2 colorNamed:(id)a3;
+ (id)labelWithText:(id)a0 systemFontOfSize:(double)a1 colorNamed:(id)a2;
+ (id)labelWithText:(id)a0 font:(id)a1 colorNamed:(id)a2;
+ (id)labelWithText:(id)a0 systemFontOfSize:(double)a1 weight:(long long)a2 textColor:(id)a3;
+ (id)labelWithText:(id)a0 systemFontOfSize:(double)a1 textColor:(id)a2;
+ (id)labelWithText:(id)a0 generalFontOfSize:(double)a1 weight:(long long)a2 colorNamed:(id)a3;
+ (id)labelWithText:(id)a0 font:(id)a1 textColor:(id)a2 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
+ (id)labelWithText:(id)a0 adaptiveGeneralFontOfSize:(double)a1 weight:(long long)a2 curve:(unsigned long long)a3 colorNamed:(id)a4;
+ (id)labelWithText:(id)a0 boldSystemFontOfSize:(double)a1 textColor:(id)a2;
+ (id)labelWithText:(id)a0 generalFontOfClass:(long long)a1 weight:(long long)a2 textColor:(id)a3;
+ (id)labelWithText:(id)a0 adaptiveGeneralFontOfClass:(long long)a1 weight:(long long)a2 colorNamed:(id)a3;
+ (id)labelWithText:(id)a0 generalFontOfClass:(long long)a1 weight:(long long)a2 colorNamed:(id)a3 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
+ (id)labelWithText:(id)a0 generalFontOfSize:(double)a1 weight:(long long)a2 textColor:(id)a3;
+ (id)labelWithText:(id)a0 boldSystemFontOfSize:(double)a1 colorNamed:(id)a2;
+ (id)labelWithText:(id)a0 adaptiveGeneralFontOfSize:(double)a1 weight:(long long)a2 curve:(unsigned long long)a3 textColor:(id)a4;
+ (id)labelWithText:(id)a0 generalFontOfClass:(long long)a1 weight:(long long)a2 colorNamed:(id)a3;
+ (id)labelWithText:(id)a0 fontOfClass:(long long)a1 weight:(long long)a2 colorNamed:(id)a3;
+ (id)labelWithText:(id)a0 fontOfClass:(long long)a1 weight:(long long)a2 textColor:(id)a3;
+ (id)labelWithText:(id)a0 font:(id)a1 colorNamed:(id)a2 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
+ (id)labelWithText:(id)a0 systemFontOfSize:(double)a1 textColor:(id)a2 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
+ (id)labelWithText:(id)a0 systemFontOfSize:(double)a1 colorNamed:(id)a2 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
+ (id)labelWithText:(id)a0 systemFontOfSize:(double)a1 weight:(long long)a2 textColor:(id)a3 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
+ (id)labelWithText:(id)a0 systemFontOfSize:(double)a1 weight:(long long)a2 colorNamed:(id)a3 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
+ (id)labelWithText:(id)a0 fontOfClass:(long long)a1 weight:(long long)a2 textColor:(id)a3 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
+ (id)labelWithText:(id)a0 fontOfClass:(long long)a1 weight:(long long)a2 colorNamed:(id)a3 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
+ (id)labelWithText:(id)a0 boldSystemFontOfSize:(double)a1 textColor:(id)a2 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
+ (id)labelWithText:(id)a0 boldSystemFontOfSize:(double)a1 colorNamed:(id)a2 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
+ (id)labelWithText:(id)a0 adaptiveGeneralFontOfClass:(long long)a1 weight:(long long)a2 textColor:(id)a3;
+ (id)labelWithText:(id)a0 adaptiveGeneralFontOfClass:(long long)a1 weight:(long long)a2 textColor:(id)a3 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
+ (id)labelWithText:(id)a0 generalFontOfClass:(long long)a1 weight:(long long)a2 textColor:(id)a3 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
+ (id)labelWithText:(id)a0 adaptiveGeneralFontOfClass:(long long)a1 weight:(long long)a2 colorNamed:(id)a3 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
+ (id)labelWithText:(id)a0 adaptiveGeneralFontOfSize:(double)a1 weight:(long long)a2 curve:(unsigned long long)a3 textColor:(id)a4 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5;
+ (id)labelWithText:(id)a0 generalFontOfSize:(double)a1 weight:(long long)a2 textColor:(id)a3 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
+ (id)labelWithText:(id)a0 adaptiveGeneralFontOfSize:(double)a1 weight:(long long)a2 curve:(unsigned long long)a3 colorNamed:(id)a4 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5;
+ (id)labelWithText:(id)a0 generalFontOfSize:(double)a1 weight:(long long)a2 colorNamed:(id)a3 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;

@end
