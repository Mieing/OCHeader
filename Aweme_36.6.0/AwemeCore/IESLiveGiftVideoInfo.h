@class HTSLiveExtraEffect, NSString, HTSLiveOpenAssetConfig, HTSLiveGiftMessage_TextEffect, NSArray, NSDictionary, HTSLiveUser, NSNumber, HTSLiveText;

@interface IESLiveGiftVideoInfo : IESLiveDynamicModel

@property (retain, nonatomic) NSNumber *effectID;
@property (copy, nonatomic) NSString *effectMD5;
@property (nonatomic) int resourceType;
@property (retain, nonatomic) HTSLiveOpenAssetConfig *openAsset;
@property (retain, nonatomic) HTSLiveUser *user;
@property (copy, nonatomic) NSString *scriptFileDir;
@property (retain, nonatomic) HTSLiveGiftMessage_TextEffect *textEffect;
@property (nonatomic) BOOL textEffectNeedCircle;
@property (nonatomic) BOOL disableShowSpecialInfo;
@property (retain, nonatomic) HTSLiveText *specialInfoDisplayText;
@property (retain, nonatomic) NSNumber *fromGiftID;
@property (retain, nonatomic) NSNumber *minHeightOfPoints;
@property (nonatomic) BOOL isNeedCorrect;
@property (nonatomic) double pointShowInterval;
@property (nonatomic) BOOL isFlyMicEffect;
@property (retain, nonatomic) NSDictionary *effectMixGiftMaskInfo;
@property (retain, nonatomic) HTSLiveExtraEffect *extraEffect;
@property (copy, nonatomic) NSArray *assetIDs;
@property (nonatomic) BOOL useEffectPlayer;
@property (nonatomic) BOOL isLynxAssetMessage;

- (void)replaceVideoInfoWithAsset:(id)a0;
- (void).cxx_destruct;

@end
