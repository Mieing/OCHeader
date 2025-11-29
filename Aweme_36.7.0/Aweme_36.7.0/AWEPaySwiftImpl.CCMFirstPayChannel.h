@class NSString;

@interface AWEPaySwiftImpl.CCMFirstPayChannel : MTLModel <MTLJSONSerializing> {
    void /* function */ channelType;
    void /* function */ defaultPayTypeDesc;
    void /* function */ beforeLogoText;
    void /* function */ logoUrl;
    void /* function */ afterLogoText;
}

@property (nonatomic, copy) NSString *channelType;
@property (nonatomic, copy) NSString *defaultPayTypeDesc;
@property (nonatomic, copy) NSString *beforeLogoText;
@property (nonatomic, copy) NSString *logoUrl;
@property (nonatomic, copy) NSString *afterLogoText;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
