@class NSMutableArray;

@interface WebRecommendResponse_RecClientCache : WXPBGeneratedMessage

@property (nonatomic) unsigned int directShowTs;
@property (nonatomic) unsigned int showAndRefleshTs;
@property (nonatomic) unsigned int category;
@property (retain, nonatomic) NSMutableArray *docidList;
@property (nonatomic) unsigned int needCache;

+ (void)initialize;

@end
