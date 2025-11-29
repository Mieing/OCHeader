@class NSString, UIColor, UIFont;

@interface IESLiveNormalActionViewConfig : NSObject

@property (nonatomic) double radius;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) long long alignment;
@property (copy, nonatomic) id /* block */ action;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;

- (void).cxx_destruct;
- (id)init;

@end
