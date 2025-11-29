@class NSNumber, NSString;

@interface IESECLiveEcAnchorFlashScreenShotParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *targetSize;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *roomUniqueKey;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
