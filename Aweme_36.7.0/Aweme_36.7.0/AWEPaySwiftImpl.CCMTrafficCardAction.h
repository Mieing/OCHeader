@class NSString;

@interface AWEPaySwiftImpl.CCMTrafficCardAction : MTLModel <MTLJSONSerializing> {
    void /* function */ type;
    void /* function */ title;
    void /* function */ icon;
}

@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *icon;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
