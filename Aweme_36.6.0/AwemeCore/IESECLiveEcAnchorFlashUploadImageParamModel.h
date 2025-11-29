@class NSString;

@interface IESECLiveEcAnchorFlashUploadImageParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *imgData;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *roomUniqueKey;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
