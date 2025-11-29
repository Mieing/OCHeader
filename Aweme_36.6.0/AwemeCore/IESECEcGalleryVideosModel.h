@class NSString, NSNumber;

@interface IESECEcGalleryVideosModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *mainUrl;
@property (copy, nonatomic) NSString *backupUrl;
@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *posterUrl;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *duration;
@property (nonatomic) BOOL needAddCookie;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
