@class UIColor, UIFont;

@interface WCFinderTabSwitchViewUpdateInfo : NSObject

@property (nonatomic) long long index;
@property (retain, nonatomic) id view;
@property (nonatomic) unsigned long long state;
@property (nonatomic) double *sprogress;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *barInset;

- (void).cxx_destruct;

@end
