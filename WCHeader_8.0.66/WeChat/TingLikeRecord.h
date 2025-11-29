@class NSString, MMListenItem, MMListenCategoryItem;

@interface TingLikeRecord : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) NSString *recordId;
@property (retain, nonatomic) MMListenItem *listenItem;
@property (retain, nonatomic) MMListenCategoryItem *categoryItem;
@property (nonatomic) unsigned long long createTime;
@property (nonatomic) BOOL isLocal;

+ (void)initialize;

@end
