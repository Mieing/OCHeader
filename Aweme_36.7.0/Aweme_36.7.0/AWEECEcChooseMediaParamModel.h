@class NSNumber, NSString;

@interface AWEECEcChooseMediaParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *maxCount;
@property (copy, nonatomic) NSString *sourceType;
@property (nonatomic) BOOL saveToPhotoAlbum;
@property (nonatomic) BOOL needBase64Data;
@property (retain, nonatomic) NSNumber *albumDuration;
@property (retain, nonatomic) NSNumber *cameraDuration;
@property (copy, nonatomic) NSString *nextButtonTitle;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
