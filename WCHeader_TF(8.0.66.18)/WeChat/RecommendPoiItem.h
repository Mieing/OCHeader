@class NSString, NSMutableArray;

@interface RecommendPoiItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSString *poiDesc;
@property (retain, nonatomic) NSString *poiLink;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSMutableArray *adIconUrlList;

+ (void)initialize;

@end
