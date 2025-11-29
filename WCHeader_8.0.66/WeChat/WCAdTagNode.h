@class NSString, UIImage;

@interface WCAdTagNode : NSObject <NSCoding>

@property (retain, nonatomic) NSString *tagName;
@property (retain, nonatomic) NSString *iconForDarkMode;
@property (retain, nonatomic) NSString *iconForLightMode;
@property (retain, nonatomic) NSString *tagLightBgColor;
@property (retain, nonatomic) NSString *tagLightNameColor;
@property (retain, nonatomic) NSString *tagDarkBgColor;
@property (retain, nonatomic) NSString *tagDarkNameColor;
@property (retain, nonatomic) UIImage *darkIcon;
@property (retain, nonatomic) UIImage *lightIcon;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (BOOL)hasIcon;
- (void).cxx_destruct;

@end
