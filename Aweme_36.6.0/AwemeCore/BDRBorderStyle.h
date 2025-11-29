@class UIColor;

@interface BDRBorderStyle : NSObject

@property (nonatomic) long long position;
@property (nonatomic) long long style;
@property (retain, nonatomic) UIColor *originColor;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) double width;

+ (id)knownSylte;

- (id)deepColorForBorder:(id)a0;
- (void)setStyleWithStr:(id)a0;
- (BOOL)needDrawBorder;
- (id)colorForDrawWithInnerLine:(BOOL)a0;
- (id)colorForDrawWithSubPostion:(long long)a0;
- (void).cxx_destruct;

@end
