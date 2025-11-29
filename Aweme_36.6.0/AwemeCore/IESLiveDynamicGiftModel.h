@class HTSLiveAssetStruct, NSString, NSArray, NSDictionary, HTSLiveImage, NSNumber, HTSLiveUser;

@interface IESLiveDynamicGiftModel : NSObject

@property (copy, nonatomic) NSString *interactiveGiftInfo;
@property (nonatomic) BOOL isSentBySelf;
@property (nonatomic) long long path;
@property (retain, nonatomic) NSNumber *targetAssetId;
@property (nonatomic) BOOL isSourceRoom;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *assetList;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSString *itemListStr;
@property (copy, nonatomic) NSString *lynxSchema;
@property (retain, nonatomic) HTSLiveAssetStruct *lynxEffectModel;
@property (retain, nonatomic) HTSLiveImage *anchorDiyOriginImg;
@property (retain, nonatomic) HTSLiveUser *sendUser;
@property (retain, nonatomic) NSNumber *giftId;
@property (nonatomic) BOOL effectDegrade;

+ (id)_obtainAssetListWithDynamicGift:(id)a0 startIndex:(long long)a1;
+ (id)_obtainAssetListWithRequiredAssets:(id)a0;
+ (id)modelWithNode:(id)a0 extra:(id)a1;

- (id)openSchema;
- (id)interactiveGiftInfoWithPath;
- (id)interactiveGiftInfoStr;
- (id)assetLocalPathStr;
- (BOOL)isLynxSchemaReady;
- (BOOL)isAnimationPreposedForSender;
- (id)dynamicGiftInfo;
- (id)dynamicGiftInfoDict;
- (void).cxx_destruct;
- (id)modelPath;
- (BOOL)isModelReady;

@end
