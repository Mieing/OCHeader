@class NSString, HTSLiveOpenAssetConfig, NSMutableDictionary, NSDictionary, HTSLiveCommon, NSMutableArray, NSNumber, HTSLiveText;

@interface HTSLiveAssetEffectUtilMessage : IESLivePBBaseMessage

@property (retain, nonatomic) NSDictionary *effectMixGiftMaskInfo;
@property (retain, nonatomic) HTSLiveOpenAssetConfig *openAsset;
@property (retain, nonatomic) NSNumber *retryCount;
@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long assetId;
@property (nonatomic) long long priority;
@property (nonatomic) long long price;
@property (retain, nonatomic) HTSLiveText *text;
@property (nonatomic) BOOL hasText;
@property (nonatomic) long long textWidth;
@property (nonatomic) long long textHeitht;
@property (copy, nonatomic) NSString *tracking;
@property (copy, nonatomic) NSString *dressId;
@property (retain, nonatomic) NSMutableArray *imagesArray;
@property (readonly, nonatomic) unsigned long long imagesArray_Count;
@property (retain, nonatomic) NSMutableArray *textsArray;
@property (readonly, nonatomic) unsigned long long textsArray_Count;
@property (copy, nonatomic) NSString *finishSelfSchema;
@property (retain, nonatomic) NSMutableDictionary *pieceValues;
@property (readonly, nonatomic) unsigned long long pieceValues_Count;

+ (id)descriptor;

- (BOOL)hasEffectMixImages;

@end
