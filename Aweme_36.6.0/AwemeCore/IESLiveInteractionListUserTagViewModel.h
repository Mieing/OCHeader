@class NSString, UIFont, UIColor;

@interface IESLiveInteractionListUserTagViewModel : NSObject

@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *contentColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double backgroundCornerRadius;

+ (id)defaultContentFont;
+ (id)defaultBackgroundColor;
+ (id)defaultContentColor;

- (void)parseFromListUserTag:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
