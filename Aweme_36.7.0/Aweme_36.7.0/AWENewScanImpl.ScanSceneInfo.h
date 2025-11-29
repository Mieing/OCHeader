@class NSArray;

@interface AWENewScanImpl.ScanSceneInfo : MTLModel <MTLJSONSerializing> {
    void /* function */ forceVerifyList;
    void /* function */ skipVerifyList;
    void /* function */ keyWordList;
}

@property (nonatomic) long long qrType;
@property (nonatomic, copy) NSArray *forceVerifyList;
@property (nonatomic, copy) NSArray *skipVerifyList;
@property (nonatomic, copy) NSArray *keyWordList;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
