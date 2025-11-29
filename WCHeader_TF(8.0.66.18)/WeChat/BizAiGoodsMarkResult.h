@class NSString, NSMutableArray, BizAiGoodsMarkInfo;

@interface BizAiGoodsMarkResult : WXPBGeneratedMessage

@property (retain, nonatomic) BizAiGoodsMarkInfo *markInfo;
@property (nonatomic) unsigned int categoryId;
@property (retain, nonatomic) NSString *categoryTitle;
@property (retain, nonatomic) NSString *categoryImageUrl;
@property (retain, nonatomic) NSMutableArray *markInfos;

+ (void)initialize;

@end
