@class NSString;

@interface TagInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *text;
@property (nonatomic) int status;
@property (nonatomic) int labelType;
@property (copy, nonatomic) NSString *labelNameFontStyle;
@property (copy, nonatomic) NSString *labelNameFontColor;
@property (copy, nonatomic) NSString *labelBottomImageURL;
@property (copy, nonatomic) NSString *labelPartnerBottomImageURL;
@property (copy, nonatomic) NSString *labelDescBottomImageURL;
@property (copy, nonatomic) NSString *labelDescImageURL;

+ (id)descriptor;

@end
