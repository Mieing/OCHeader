@class NSString, NSNumber;

@interface AWEEcAlbumScanDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *qrCode;
@property (retain, nonatomic) NSNumber *status;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
