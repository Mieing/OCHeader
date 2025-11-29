@class NSString, NSDictionary;

@interface PIACacheModel : NSObject

@property (nonatomic) long long maxAge;
@property (nonatomic) BOOL isValid;
@property (nonatomic) BOOL isActive;
@property (nonatomic) double createTime;
@property (copy, nonatomic) NSString *URL;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSDictionary *meta;
@property (copy, nonatomic) NSString *manifestHead;
@property (copy, nonatomic) NSString *extra;

+ (id)generateModelWithURL:(id)a0 FromContent:(id)a1 extraVary:(id)a2 extraManifest:(id)a3;
+ (id)fetchCacheStringFrom:(id)a0;
+ (id)generateExtraStringFrom:(id)a0;

- (id)fetchManifestFromHTML:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
