@class NSString, NSDictionary;

@interface AWEPaySwiftImpl.FKMIndustryOperationContentInfo : MTLModel <MTLJSONSerializing> {
    void /* function */ contentId;
    void /* function */ contentDesc;
    void /* function */ contents;
}

@property (nonatomic, copy) NSString *contentId;
@property (nonatomic, copy) NSString *contentDesc;
@property (nonatomic, copy) NSDictionary *contents;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
