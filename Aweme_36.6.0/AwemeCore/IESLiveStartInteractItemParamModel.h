@class NSNumber, NSString, IESLiveStartInteractItemOpenPlatformInteractInfoModel;

@interface IESLiveStartInteractItemParamModel : IESLiveBridgeModel

@property (retain, nonatomic) IESLiveStartInteractItemOpenPlatformInteractInfoModel *openPlatformInteractInfo;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSNumber *dataType;
@property (retain, nonatomic) NSNumber *playmode;
@property (copy, nonatomic) NSString *source;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
