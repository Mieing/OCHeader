@interface MMPTools : NSObject

+ (id)urlEncode:(id)a0;
+ (id)urlDecode:(id)a0;
+ (id)MD5StringFromData:(id)a0;
+ (id)dataFromDict:(id)a0;
+ (id)strFromDict:(id)a0;
+ (id)colorWithHexStr:(id)a0;
+ (double)floatWithHexStr:(id)a0;
+ (id)dictFromData:(id)a0;
+ (id)dictFromStr:(id)a0;
+ (long long)compareVersion:(id)a0 with:(id)a1;
+ (id)sha256Value:(id)a0;
+ (id)imageWithColor:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)appName;
+ (id)keyWindow;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenRect;

@end
