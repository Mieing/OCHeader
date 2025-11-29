@class NSString, NSMutableArray;

@interface MaterialRecommWxaCard : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *recommName;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSMutableArray *categoryList;
@property (nonatomic) float score;
@property (retain, nonatomic) NSString *enterPath;
@property (nonatomic) unsigned int versionType;
@property (retain, nonatomic) NSString *nickname;
@property (nonatomic) BOOL needUnstatedPopup;
@property (retain, nonatomic) NSString *materialWording;
@property (retain, nonatomic) NSMutableArray *suffixList;

+ (void)initialize;

@end
