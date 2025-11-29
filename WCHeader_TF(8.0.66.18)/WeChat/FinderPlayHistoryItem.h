@class FinderContact, FinderObject, FinderCollectionInfo;

@interface FinderPlayHistoryItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int itemType;
@property (retain, nonatomic) FinderObject *object;
@property (retain, nonatomic) FinderCollectionInfo *collectionInfo;
@property (retain, nonatomic) FinderContact *authorContact;
@property (nonatomic) unsigned long long lastPlayTime;

+ (void)initialize;

@end
