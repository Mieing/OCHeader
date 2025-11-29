@class NSString, _TtC15AWEPaySwiftImpl22CCMOperationCardConfig;

@interface AWEPaySwiftImpl.CCMOperationCard : MTLModel <MTLJSONSerializing> {
    void /* function */ operationCardType;
}

@property (nonatomic, copy) NSString *operationCardType;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl22CCMOperationCardConfig *operationCardConfig;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
