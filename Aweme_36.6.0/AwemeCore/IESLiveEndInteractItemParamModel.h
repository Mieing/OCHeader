@class IESLiveEndInteractItemOpenPlatformInteractInfoModel, NSNumber, NSString;

@interface IESLiveEndInteractItemParamModel : IESLiveBridgeModel

@property (retain, nonatomic) IESLiveEndInteractItemOpenPlatformInteractInfoModel *openPlatformInteractInfo;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSNumber *dataType;
@property (retain, nonatomic) NSNumber *playmode;
@property (copy, nonatomic) NSString *source;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
