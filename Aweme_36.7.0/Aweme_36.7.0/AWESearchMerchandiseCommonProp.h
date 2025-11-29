@class AWESearchMerchandiseClickAction, AWESearchMerchandiseBackgroundConfig, NSDictionary, AWESearchMerchandiseRegionInfo;

@interface AWESearchMerchandiseCommonProp : AWEBaseApiModel

@property (retain, nonatomic) AWESearchMerchandiseClickAction *clickAction;
@property (retain, nonatomic) AWESearchMerchandiseBackgroundConfig *backgroundConfig;
@property (copy, nonatomic) NSDictionary *logInfo;
@property (retain, nonatomic) AWESearchMerchandiseRegionInfo *regionInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
