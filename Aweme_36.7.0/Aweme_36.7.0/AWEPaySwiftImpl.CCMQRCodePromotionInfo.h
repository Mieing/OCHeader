@class NSString;

@interface AWEPaySwiftImpl.CCMQRCodePromotionInfo : MTLModel <MTLJSONSerializing> {
    void /* function */ discountText;
    void /* function */ textColorHex;
    void /* function */ lineColorHex;
    void /* function */ jumpURL;
}

@property (nonatomic, copy) NSString *discountText;
@property (nonatomic, copy) NSString *textColorHex;
@property (nonatomic, copy) NSString *lineColorHex;
@property (nonatomic) double lineWidth;
@property (nonatomic, copy) NSString *jumpURL;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
