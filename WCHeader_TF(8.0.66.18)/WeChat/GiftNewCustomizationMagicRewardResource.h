@class NSString, MMFinderLiveNewCustomGiftItemResourceURL;

@interface GiftNewCustomizationMagicRewardResource : NSObject

@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) MMFinderLiveNewCustomGiftItemResourceURL *engineResource;
@property (retain, nonatomic) NSString *minCodeVersion;

+ (id)createMagicRewardResourceWithCustomizationModel:(id)a0;

- (BOOL)isParamUnValid;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
