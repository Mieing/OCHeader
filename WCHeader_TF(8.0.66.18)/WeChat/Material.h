@class NSString, MaterialExtInfo, MaterialPageInfo;

@interface Material : WXPBGeneratedMessage

@property (nonatomic) int materialType;
@property (retain, nonatomic) NSString *headUrl;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *buttonName;
@property (nonatomic) int buttonType;
@property (retain, nonatomic) MaterialPageInfo *buttonPage;
@property (retain, nonatomic) NSString *linkName;
@property (nonatomic) int linkType;
@property (retain, nonatomic) MaterialPageInfo *linkPage;
@property (nonatomic) int creativeType;
@property (retain, nonatomic) NSString *creativeUrl;
@property (retain, nonatomic) NSString *thumbUrl;
@property (nonatomic) unsigned long long materialId;
@property (retain, nonatomic) MaterialExtInfo *extinfo;
@property (retain, nonatomic) NSString *atmosphereImageUrl;
@property (retain, nonatomic) NSString *scanImageUrl;
@property (retain, nonatomic) NSString *brandName;
@property (retain, nonatomic) NSString *profileUrl;
@property (retain, nonatomic) NSString *btnBgColor;
@property (retain, nonatomic) NSString *btnFontColor;
@property (retain, nonatomic) NSString *btnBgColorGreeting;
@property (retain, nonatomic) NSString *btnFontColorGreeting;
@property (retain, nonatomic) NSString *fullScrennBgColor;

+ (void)initialize;

@end
