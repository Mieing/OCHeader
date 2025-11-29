@class NSString;

@interface IESECBuySwift.StructuredCacheKey : NSObject {
    void /* function */ promotionId;
    void /* function */ productId;
    void /* function */ sceneType;
    void /* function */ firstSpecId;
}

@property (nonatomic, readonly) NSString *promotionId;
@property (nonatomic, readonly) NSString *productId;
@property (nonatomic, readonly) NSString *sceneType;
@property (nonatomic, readonly) NSString *firstSpecId;

+ (id)createFromStringKeyWithCacheKey:(id)a0;

- (id)initWithPromotionId:(id)a0 productId:(id)a1 sceneType:(id)a2 firstSpecId:(id)a3;
- (id)convertToStringKey;
- (void).cxx_destruct;
- (id)init;

@end
