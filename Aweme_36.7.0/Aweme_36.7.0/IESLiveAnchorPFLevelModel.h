@class UIColor, NSString;

@interface IESLiveAnchorPFLevelModel : NSObject

@property (retain, nonatomic) UIColor *gradientColor;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL showSubTitleArrow;
@property (copy, nonatomic) id /* block */ onSubTitleDidTapped;

- (void).cxx_destruct;

@end
