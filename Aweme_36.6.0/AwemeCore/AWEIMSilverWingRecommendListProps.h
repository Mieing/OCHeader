@class UIColor, NSArray;

@interface AWEIMSilverWingRecommendListProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ didClickRecommendBlock;
@property (nonatomic) BOOL hasBackgroundImage;
@property (nonatomic) BOOL backgroundImageIsBright;
@property (retain, nonatomic) UIColor *customBackgroundColor;
@property (retain, nonatomic) UIColor *customTextColor;
@property (retain, nonatomic) UIColor *customBorderColor;
@property (copy, nonatomic) NSArray *viewModelArray;

- (void).cxx_destruct;

@end
