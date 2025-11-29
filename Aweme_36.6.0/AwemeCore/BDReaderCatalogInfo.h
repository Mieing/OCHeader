@class NSString, BDReaderOpenParameters, NSMutableArray;

@interface BDReaderCatalogInfo : NSObject <NSCoding>

@property (copy, nonatomic) NSString *catalogTitle;
@property (copy, nonatomic) NSString *catalogId;
@property (copy, nonatomic) NSString *parentCatalogId;
@property (nonatomic) unsigned long long catalogIndex;
@property (nonatomic) unsigned long long catalogLevel;
@property (copy, nonatomic) NSString *chapterOpenId;
@property (copy, nonatomic) NSString *paraSrcId;
@property (retain, nonatomic) BDReaderOpenParameters *openParams;
@property (copy, nonatomic) NSString *volume;
@property (retain, nonatomic) NSMutableArray *subCatalogs;
@property (nonatomic) BOOL isRealCatalogId;
@property (nonatomic) BOOL disableRealProgress;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
