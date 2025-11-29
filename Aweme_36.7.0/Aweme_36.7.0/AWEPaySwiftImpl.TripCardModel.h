@class NSString;

@interface AWEPaySwiftImpl.TripCardModel : MTLModel <MTLJSONSerializing> {
    void /* function */ cardTypeString;
    void /* function */ cardData;
}

@property (nonatomic, copy) NSString *cardTypeString;
@property (nonatomic, copy) NSString *cardData;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
