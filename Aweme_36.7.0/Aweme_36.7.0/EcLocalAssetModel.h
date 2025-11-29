@class NSString;

@interface EcLocalAssetModel : EcWCDBBase <WCTTableCoding>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *relativePath;
@property (nonatomic) BOOL deleteOnEnd;
@property (nonatomic) long long createdAtUtc;
@property (nonatomic) long long modifiedAtUtc;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long mediaType;
@property (nonatomic) long long mediaSubtypes;
@property (nonatomic) long long sourceType;
@property (nonatomic) BOOL isFavorite;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) long long playbackStyle;
@property (nonatomic) unsigned long long durationMs;

+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)createdAtUtc;
+ (const void *)deleteOnEnd;
+ (const void *)modifiedAtUtc;
+ (const void *)sourceType;
+ (const void *)mediaType;
+ (const void *)isHidden;
+ (const void *)height;
+ (const void *)width;
+ (const void *)relativePath;
+ (const void *)isFavorite;
+ (const void *)identifier;
+ (const void *)durationMs;
+ (const void *)playbackStyle;

- (id)initWithIdentifier:(id)a0 createdAtUtc:(long long)a1 modifiedAtUtc:(long long)a2 width:(long long)a3 height:(long long)a4 mediaType:(long long)a5 mediaSubtypes:(long long)a6 sourceType:(long long)a7 isFavorite:(BOOL)a8 isHidden:(BOOL)a9 playbackStyle:(long long)a10 durationMs:(double)a11;
- (void).cxx_destruct;

@end
