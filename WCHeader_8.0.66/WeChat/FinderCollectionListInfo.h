@class NSData, NSMutableArray;

@interface FinderCollectionListInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *collectionInfo;
@property (nonatomic) unsigned int collectionCount;
@property (retain, nonatomic) NSData *lastBuffer;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;

- (void)setLastBuffer:(id)a0;
- (id)lastBuffer;
- (void)setCollectionCount:(unsigned int)a0;
- (unsigned int)collectionCount;
- (void)setCollectionInfo:(id)a0;
- (id)collectionInfo;
- (id)archivedWCTValue;

@end
