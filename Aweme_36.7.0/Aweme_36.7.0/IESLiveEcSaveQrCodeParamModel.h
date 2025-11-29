@class NSString, NSNumber;

@interface IESLiveEcSaveQrCodeParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *imagePath;
@property (retain, nonatomic) NSNumber *type;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
