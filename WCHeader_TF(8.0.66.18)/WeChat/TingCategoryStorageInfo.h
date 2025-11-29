@class MMListenCategoryItem, NSString, NSData, NSMutableArray;

@interface TingCategoryStorageInfo : WXPBGeneratedMessage

@property (retain, nonatomic) MMListenCategoryItem *categoryItem;
@property (retain, nonatomic) NSMutableArray *idListResult;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSString *updateMd5;
@property (nonatomic) unsigned long long updateTime;
@property (nonatomic) unsigned long long expireTimeS;
@property (retain, nonatomic) NSMutableArray *fetchIdList;
@property (nonatomic) BOOL isPreload;
@property (nonatomic) BOOL hasMoreOnTop;
@property (nonatomic) int clientListVersion;

+ (void)initialize;

@end
