@interface CSJFinishViewStyleModel : NSObject

@property (nonatomic) long long iconWidth;
@property (nonatomic) long long labelWidth;
@property (nonatomic) long long labelHeight;
@property (nonatomic) long long buttonWidth;
@property (nonatomic) long long buttonHeight;
@property (nonatomic) long long labelButtonGap;
@property (nonatomic) long long labelFontSize;
@property (nonatomic) long long buttonFontSize;
@property (nonatomic) BOOL showButton;

+ (id)styleModelLarge;
+ (id)styleModelSmall;
+ (id)styleModelMiddle;
+ (id)styleModelWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
