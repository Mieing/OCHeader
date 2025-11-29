@class UIColor;

@interface AWEUGPendantProgressUIInfo : NSObject

@property (retain, nonatomic) UIColor *progressColor;
@property (retain, nonatomic) UIColor *progressBackgroundColor;
@property (nonatomic) double progressWidth;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) unsigned long long progressType;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } expandUIFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } foldUIFrame;

- (void).cxx_destruct;

@end
