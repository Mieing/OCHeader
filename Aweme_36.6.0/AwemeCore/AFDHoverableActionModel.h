@class UIColor, NSString, UIFont, UIImage;

@interface AFDHoverableActionModel : NSObject

@property (retain, nonatomic) UIImage *normalImage;
@property (retain, nonatomic) UIImage *selectedImage;
@property (nonatomic) BOOL selected;
@property (copy, nonatomic) NSString *normalTitle;
@property (copy, nonatomic) NSString *selectedTitle;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *lineDividerColor;
@property (nonatomic) unsigned long long iamgePosition;
@property (nonatomic) long long hoverableStyle;
@property (retain, nonatomic) UIColor *highlightedColor;
@property (nonatomic) BOOL hasImageViewAnimation;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ animationFinishblock;

- (void).cxx_destruct;

@end
