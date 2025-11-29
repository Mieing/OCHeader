@class NSString, WCAdCardBtnInfo;

@interface WCAdTagButtonInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *bgImageUrl;
@property (retain, nonatomic) NSString *bgImageUrlDark;
@property (nonatomic) double layoutWidth;
@property (nonatomic) double layoutHeight;
@property (nonatomic) double cornerRadius;
@property (nonatomic) int basicRemWidth;
@property (nonatomic) int basicRootFontSize;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *iconUrlDark;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *titleColor;
@property (nonatomic) double titleColorAlpha;
@property (retain, nonatomic) NSString *titleColorDark;
@property (nonatomic) double titleColorAlphaDark;
@property (retain, nonatomic) WCAdCardBtnInfo *clickActionInfo;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
