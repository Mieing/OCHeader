@class NSDictionary, FinderCollectionWatchingInfo;

@interface WCFinderContinueCollectionModel : NSObject

@property (nonatomic) unsigned long long index;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) FinderCollectionWatchingInfo *collectionWatchingInfo;
@property (retain, nonatomic) NSDictionary *reportDic;

+ (id)getCollectionList:(id)a0;

- (void).cxx_destruct;

@end
