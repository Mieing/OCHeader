@class NSString, UIImage, NSDictionary;

@interface AWESearchBottomNormalBarComponentModel : AWESearchComponentBasicModel

@property (copy, nonatomic) NSString *preIconUrl;
@property (retain, nonatomic) UIImage *preLocalIcon;
@property (copy, nonatomic) NSString *preText;
@property (copy, nonatomic) NSString *preTextColor;
@property (copy, nonatomic) NSString *preTextColorDark;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *textColorDark;
@property (copy, nonatomic) NSString *jumpSchema;
@property (nonatomic) BOOL hasDividingLine;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *backgroundColorDark;
@property (nonatomic) BOOL hasArrow;
@property (copy, nonatomic) NSString *businessType;
@property (nonatomic) BOOL useCustomTap;
@property (copy, nonatomic) NSDictionary *trackParams;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
