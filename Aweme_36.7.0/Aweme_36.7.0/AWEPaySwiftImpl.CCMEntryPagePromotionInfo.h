@class NSString, _TtC15AWEPaySwiftImpl19CCMGoOpenPromotions, _TtC15AWEPaySwiftImpl22CCMQRCodePromotionInfo;

@interface AWEPaySwiftImpl.CCMEntryPagePromotionInfo : MTLModel <MTLJSONSerializing> {
    void /* function */ businessType;
}

@property (nonatomic, copy) NSString *businessType;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl19CCMGoOpenPromotions *goOpenPromotions;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl22CCMQRCodePromotionInfo *qrCodePromotion;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
