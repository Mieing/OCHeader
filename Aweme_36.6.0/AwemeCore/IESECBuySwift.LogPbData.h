@class NSString;

@interface IESECBuySwift.LogPbData : MTLModel <MTLJSONSerializing> {
    void /* function */ imprId;
}

@property (nonatomic, copy) NSString *imprId;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
