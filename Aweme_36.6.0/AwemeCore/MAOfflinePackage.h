@class NSString, NSDictionary, NSArray, NSMutableDictionary, MAOfflineItemNationWide;

@interface MAOfflinePackage : NSObject <NSCoding>

@property (readonly, nonatomic) NSDictionary *items;
@property (readonly, nonatomic) NSDictionary *cityCodeItems;
@property (copy, nonatomic) NSString *version;
@property (retain, nonatomic) NSArray *provinces;
@property (retain, nonatomic) NSArray *municipalities;
@property (retain, nonatomic) MAOfflineItemNationWide *nationWide;
@property (retain, nonatomic) NSMutableDictionary *dictionaryItems;

+ (id)packageWithDictionary:(id)a0;
+ (id)packageWithContentsOfFile:(id)a0;

- (void)executeInitializationWithDictionary:(id)a0;
- (BOOL)isProvincesForDictionary:(id)a0;
- (id)provincesAndMunicipalitiesForDictionary:(id)a0;
- (id)nationWideForDictionary:(id)a0;
- (void)invalidateItems;
- (id)dictionaryForItemArray:(id)a0 key:(id)a1;
- (void)constructDictionaryItems;
- (void)scanItemsWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)description;
- (id)descriptionDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)writeToFile:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)dealloc;
- (void)reduceMemoryUsage;

@end
