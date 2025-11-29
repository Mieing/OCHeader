@class FinderContact, FinderObject, FinderCollectionInfo;

@interface FinderInteractionedListItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int itemType;
@property (retain, nonatomic) FinderObject *object;
@property (retain, nonatomic) FinderCollectionInfo *collectionInfo;
@property (retain, nonatomic) FinderContact *authorContact;
@property (nonatomic) unsigned long long favTs;

+ (void)initialize;

@end
