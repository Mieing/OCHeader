@class AppItem, NSString;

@interface GameRecommend_RecoItem : WXPBGeneratedMessage

@property (retain, nonatomic) AppItem *appItem;
@property (retain, nonatomic) NSString *recommendDesc;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *jumpUrl;

+ (void)initialize;

@end
