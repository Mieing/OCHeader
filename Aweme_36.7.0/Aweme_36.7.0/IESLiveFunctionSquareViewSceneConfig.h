@class NSString, UIColor, IESLiveFunctionSquareSearchConfig;

@interface IESLiveFunctionSquareViewSceneConfig : NSObject

@property (readonly, nonatomic) unsigned long long scene;
@property (readonly, nonatomic) double viewHeight;
@property (readonly, copy, nonatomic) NSString *backgroundColorHexStr;
@property (readonly, nonatomic) double bgCornerRadius;
@property (readonly, nonatomic) double titleTopMargin;
@property (readonly, nonatomic) UIColor *titleColor;
@property (readonly, nonatomic) double searchButtonRightMargin;
@property (readonly, nonatomic) BOOL alwaysShowNavSearchButton;
@property (readonly, copy, nonatomic) NSString *searchButtonImageName;
@property (readonly, nonatomic) BOOL hideCloseButton;
@property (nonatomic) BOOL hideSearchButton;
@property (readonly, nonatomic) BOOL hideSearchView;
@property (readonly, nonatomic) double tableViewTopMargin;
@property (readonly, nonatomic) IESLiveFunctionSquareSearchConfig *searchConfig;

- (void).cxx_destruct;
- (id)init;
- (id)initWithScene:(unsigned long long)a0;

@end
