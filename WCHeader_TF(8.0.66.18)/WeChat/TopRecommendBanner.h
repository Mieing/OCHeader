@class NSString, NSMutableArray;

@interface TopRecommendBanner : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) NSString *backgroundPicUrl;
@property (retain, nonatomic) NSMutableArray *gameList;
@property (retain, nonatomic) NSString *externInfo;

+ (void)initialize;

@end
