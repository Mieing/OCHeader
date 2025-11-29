@class UIColor, UIFont;

@interface WCFinderAuthorContactRecommendViewStyle : NSObject

@property (nonatomic) double headIconSize;
@property (nonatomic) double authIconSize;
@property (retain, nonatomic) UIFont *nicknameFont;
@property (retain, nonatomic) UIColor *nicknameColor;

+ (id)defaultStyle;

- (void).cxx_destruct;

@end
