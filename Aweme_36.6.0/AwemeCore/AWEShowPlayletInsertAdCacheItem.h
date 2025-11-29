@class NSDate, NSObject, AWEAwemeModel;

@interface AWEShowPlayletInsertAdCacheItem : NSObject

@property (retain, nonatomic) AWEAwemeModel *adModel;
@property (retain, nonatomic) NSDate *cacheDate;
@property (nonatomic) BOOL isBlockAd;
@property (weak, nonatomic) NSObject *page;
@property (nonatomic) BOOL hadInsert;

- (void).cxx_destruct;

@end
