@class UIFont, NSString, UIColor, NSNumber;

@interface CJPayMultifunctionalAttributeTextModel : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) NSNumber *iconEdgeLength;
@property (copy, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSNumber *iconCornerRadius;
@property (retain, nonatomic) NSNumber *iconCenterYoffset;
@property (retain, nonatomic) NSNumber *iconLineLayoutPadding;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void).cxx_destruct;

@end
