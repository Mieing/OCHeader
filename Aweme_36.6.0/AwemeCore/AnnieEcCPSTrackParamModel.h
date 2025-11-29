@class NSString;

@interface AnnieEcCPSTrackParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *cpsTrack;
@property (copy, nonatomic) NSString *roomID;
@property (retain, nonatomic) NSString *productID;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
