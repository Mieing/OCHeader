@class NSString, NSArray, AWEInteractionModernPOIStickerInfoModel, AWEInteractionPOIStickerModel;

@interface ACCPOIStickerModel : NSObject

@property (copy, nonatomic) NSString *effectIdentifier;
@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSArray *styleEffectIds;
@property (retain, nonatomic) AWEInteractionModernPOIStickerInfoModel *styleInfos;
@property (retain, nonatomic) AWEInteractionPOIStickerModel *interactionStickerInfo;

- (void).cxx_destruct;

@end
