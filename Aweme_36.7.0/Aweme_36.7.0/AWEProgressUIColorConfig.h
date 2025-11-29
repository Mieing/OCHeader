@class UIColor, NSString;

@interface AWEProgressUIColorConfig : NSObject

@property (retain, nonatomic) UIColor *color;
@property (copy, nonatomic) NSString *colorName;
@property (copy, nonatomic) NSString *colorStr;

+ (id)colorConfigWith:(id)a0 colorName:(id)a1 colorString:(id)a2;

- (void).cxx_destruct;

@end
