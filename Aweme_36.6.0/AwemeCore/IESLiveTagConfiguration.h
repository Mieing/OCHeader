@class UIColor, NSString, UIFont, UIImage;

@interface IESLiveTagConfiguration : NSObject

@property (nonatomic) long long type;
@property (nonatomic) long long subType;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margins;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double cornerRadius;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *textFont;
@property (nonatomic) double textHeight;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) double iconSpace;

+ (id)configurationWithType:(long long)a0;
+ (id)configurationWithType:(long long)a0 subType:(long long)a1;
+ (id)clearConfiguration;

- (void).cxx_destruct;
- (id)init;

@end
