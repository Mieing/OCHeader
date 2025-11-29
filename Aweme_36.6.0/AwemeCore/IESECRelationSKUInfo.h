@class NSString, NSDictionary, UIResponder;

@interface IESECRelationSKUInfo : NSObject

@property (copy, nonatomic) NSString *promotionId;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *authorId;
@property (nonatomic) long long skuType;
@property (copy, nonatomic) NSString *orderURL;
@property (copy, nonatomic) NSString *ecomSceneId;
@property (copy, nonatomic) NSString *cartTrack;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSDictionary *orderEntranceInfo;
@property (copy, nonatomic) NSString *BtmID;
@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSDictionary *bcm;
@property (weak, nonatomic) UIResponder *host;
@property (retain, nonatomic) NSString *buyInTrack;
@property (retain, nonatomic) NSString *cBizCombo;

- (void).cxx_destruct;

@end
