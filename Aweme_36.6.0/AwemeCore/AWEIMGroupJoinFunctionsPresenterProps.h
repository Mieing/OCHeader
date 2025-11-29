@class NSArray, UIColor;

@interface AWEIMGroupJoinFunctionsPresenterProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) NSArray *iconItems;
@property (nonatomic) double width;
@property (nonatomic) double itemHeight;
@property (nonatomic) double itemWidth;
@property (nonatomic) double spacing;
@property (retain, nonatomic) UIColor *cellColor;
@property (copy, nonatomic) id /* block */ tapFunctionBlock;
@property (copy, nonatomic) id /* block */ willDisplayModel;

- (void).cxx_destruct;

@end
