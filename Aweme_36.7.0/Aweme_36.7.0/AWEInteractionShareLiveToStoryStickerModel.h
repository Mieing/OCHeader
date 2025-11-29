@class AWEInteractionShareLiveToStoryStickerInfoModel;

@interface AWEInteractionShareLiveToStoryStickerModel : AWEInteractionStickerModel

@property (retain, nonatomic) AWEInteractionShareLiveToStoryStickerInfoModel *liveInfo;

+ (id)liveInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
