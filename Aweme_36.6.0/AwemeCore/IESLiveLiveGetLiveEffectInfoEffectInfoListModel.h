@class NSString, NSNumber;

@interface IESLiveLiveGetLiveEffectInfoEffectInfoListModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *effectID;
@property (copy, nonatomic) NSString *effectName;
@property (copy, nonatomic) NSString *effectIconUrl;
@property (nonatomic) BOOL effectEnableCustomizeDuration;
@property (retain, nonatomic) NSNumber *effectDefaultDuration;
@property (retain, nonatomic) NSNumber *effectMaxDuration;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
