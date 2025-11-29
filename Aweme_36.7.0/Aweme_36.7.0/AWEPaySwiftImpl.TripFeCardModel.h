@class NSString, NSDictionary;

@interface AWEPaySwiftImpl.TripFeCardModel : MTLModel <MTLJSONSerializing> {
    void /* function */ schema;
    void /* function */ bizData;
}

@property (nonatomic, copy) NSString *schema;
@property (nonatomic, copy) NSDictionary *bizData;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
