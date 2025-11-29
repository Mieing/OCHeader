@class NSURL, NSMutableDictionary, NSString;

@interface BDSchemaData : NSObject <BDSchemaMutableDataProtocol>

@property (retain, nonatomic) NSMutableDictionary *levelData;
@property (retain, nonatomic) NSMutableDictionary *sourceData;
@property (readonly, nonatomic) NSURL *originUrl;
@property (readonly, copy, nonatomic) NSString *scheme;
@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, copy, nonatomic) NSString *fragment;
@property (nonatomic) BOOL alreadyParseQueryItemsRecursively;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setOriginUrl:(id)a0;
- (void)addParam:(id)a0 value:(id)a1 cover:(BOOL)a2;
- (id)getStringValue:(id)a0;
- (void)removeParam:(id)a0;
- (id)initWithUrlString:(id)a0;
- (void)setStringValue:(id)a0 forKey:(id)a1 withLevel:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)queryItems;
- (void)updateWithDictionary:(id)a0;
- (void)setPath:(id)a0;
- (void)setScheme:(id)a0;
- (void)setStringValue:(id)a0 forKey:(id)a1;
- (void)updateWithData:(id)a0;
- (id)url;
- (void)setFragment:(id)a0;
- (id)initWithUrl:(id)a0;

@end
