@class UIColor, NSMutableDictionary, UIFont;

@interface MMStringStyle : NSObject

@property (retain, nonatomic) NSMutableDictionary *attributes;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) long long underlineStyle;
@property (retain, nonatomic) UIColor *underlineColor;
@property (nonatomic) long long strikethroughStyle;
@property (retain, nonatomic) UIColor *strikethroughColor;

- (id)init;
- (id)attributesDic;
- (void).cxx_destruct;

@end
