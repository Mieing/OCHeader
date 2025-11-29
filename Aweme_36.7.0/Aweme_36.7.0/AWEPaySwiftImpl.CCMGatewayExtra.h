@class NSString;

@interface AWEPaySwiftImpl.CCMGatewayExtra : MTLModel <MTLJSONSerializing> {
    void /* function */ logID;
}

@property (nonatomic, copy) NSString *logID;
@property (nonatomic) long long serverTimeUseMS;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
