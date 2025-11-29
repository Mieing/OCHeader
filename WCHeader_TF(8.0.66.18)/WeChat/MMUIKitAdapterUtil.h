@interface MMUIKitAdapterUtil : NSObject

+ (id)getFirstActiveWindowScene;
+ (void)enumerateWindowWithBlock:(id /* block */)a0;
+ (id)keyWindow;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })statusBarFrame;
+ (long long)statusBarStyle;
+ (BOOL)statusBarHidden;
+ (BOOL)isIgnoringInteractionEvents;
+ (void)beginIgnoringInteractionEvents;
+ (void)endIgnoringInteractionEvents;

@end
