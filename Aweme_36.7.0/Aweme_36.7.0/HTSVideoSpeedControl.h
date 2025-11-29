@class NSArray, NSString, NSDictionary, UIView, NSMutableArray;
@protocol HTSVideoSpeedControlDelegate;

@interface HTSVideoSpeedControl : UIView

@property (retain, nonatomic) UIView *indicatorLayer;
@property (nonatomic) long long selectedIndex;
@property (copy, nonatomic) NSArray *titlesArray;
@property (retain, nonatomic) NSMutableArray *titleBtnArray;
@property (weak, nonatomic) id<HTSVideoSpeedControlDelegate> delegate;
@property (readonly, nonatomic) double selectedSpeed;
@property (retain, nonatomic) NSString *sourcePage;
@property (retain, nonatomic) NSDictionary *referExtra;

+ (double)defaultSelectedSpeed;

- (id)speedControlTitles;
- (void)speedButtonClick:(id)a0;
- (void)selectSpeedByCode:(double)a0;
- (void).cxx_destruct;
- (double)selectedSpeed;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)awakeFromNib;
- (void)layoutSubviews;

@end
