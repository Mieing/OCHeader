@class NSString, NSDate;

@interface ACCMomentMediaAsset : MTLModel <WCTTableCoding>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (nonatomic) unsigned long long scanDate;
@property (nonatomic) BOOL didProcessed;
@property (copy, nonatomic) NSString *localIdentifier;
@property (nonatomic) long long mediaType;
@property (nonatomic) unsigned long long mediaSubtypes;
@property (nonatomic) unsigned long long pixelWidth;
@property (nonatomic) unsigned long long pixelHeight;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *modificationDate;
@property (nonatomic) double duration;

+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)didProcessed;
+ (const void *)modificationDate;
+ (const void *)mediaType;
+ (const void *)creationDate;
+ (const void *)duration;
+ (const void *)mediaSubtypes;
+ (const void *)scanDate;
+ (const void *)localIdentifier;
+ (const void *)pixelHeight;
+ (const void *)pixelWidth;

- (void).cxx_destruct;
- (id)initWithPHAsset:(id)a0;

@end
