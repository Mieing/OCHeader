@class UIColor;

@interface AWEVisitFrequentUserVideoListIndicatorConfig : NSObject

@property (nonatomic) double dotViewNormalHeight;
@property (nonatomic) double dotViewSelectedHeight;
@property (nonatomic) double dotViewInnerPadding;
@property (retain, nonatomic) UIColor *dotViewNormalColor;
@property (retain, nonatomic) UIColor *dotViewSelectedColor;
@property (nonatomic) double dotViewNormalBorderWidth;
@property (retain, nonatomic) UIColor *dotViewNormalBorderColor;
@property (nonatomic) double dotViewSelectedBorderWidth;
@property (retain, nonatomic) UIColor *dotViewSelectedBorderColor;

+ (id)defaultConfig;

- (void).cxx_destruct;

@end
