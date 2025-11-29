@class NSString, FinderCollectionInfo;

@interface FinderCollectionWatchingInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderCollectionInfo *collectionInfo;
@property (retain, nonatomic) NSString *collectionName;
@property (retain, nonatomic) NSString *coverImgUrl;
@property (nonatomic) unsigned int watchedCount;
@property (nonatomic) unsigned int totalCount;
@property (nonatomic) unsigned long long currentObjectId;

+ (void)initialize;

@end
