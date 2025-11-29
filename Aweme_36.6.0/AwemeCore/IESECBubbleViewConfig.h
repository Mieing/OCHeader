@class NSString, UIColor;

@interface IESECBubbleViewConfig : NSObject

@property (nonatomic) double contentHeight;
@property (nonatomic) double contentWidth;
@property (nonatomic) double contentRadius;
@property (nonatomic) double arrowHeight;
@property (nonatomic) double arrowWidth;
@property (nonatomic) double arrowX;
@property (nonatomic) long long arrowDirection;
@property (nonatomic) double arrowPosition;
@property (retain, nonatomic) NSString *arrowImage;
@property (retain, nonatomic) UIColor *arrowImageTintColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *textColor;

- (void).cxx_destruct;

@end
