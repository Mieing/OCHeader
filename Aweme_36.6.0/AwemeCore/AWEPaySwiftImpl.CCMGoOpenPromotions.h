@class NSString;

@interface AWEPaySwiftImpl.CCMGoOpenPromotions : MTLModel <MTLJSONSerializing> {
    void /* function */ promotionType;
    void /* function */ notOpenedCenterImg;
    void /* function */ notOpenedPromotionText;
    void /* function */ theme;
    void /* function */ promoAssetID;
    void /* function */ planID;
}

@property (nonatomic, copy) NSString *promotionType;
@property (nonatomic, copy) NSString *notOpenedCenterImg;
@property (nonatomic, copy) NSString *notOpenedPromotionText;
@property (nonatomic) BOOL canDisplay;
@property (nonatomic, copy) NSString *theme;
@property (nonatomic, copy) NSString *promoAssetID;
@property (nonatomic, copy) NSString *planID;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
