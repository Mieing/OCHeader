@class NSString;

@interface CustomRotorElement : UIControl

@property (nonatomic) int index;
@property (retain, nonatomic) NSString *nsUrl;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } myFrame;
@property (copy, nonatomic) id /* block */ handler;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityLabel;
- (BOOL)accessibilityActivate;
- (void).cxx_destruct;

@end
