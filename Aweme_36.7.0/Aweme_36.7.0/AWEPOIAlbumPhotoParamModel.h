@class NSString, NSDictionary;

@interface AWEPOIAlbumPhotoParamModel : NSObject

@property (copy, nonatomic) NSString *anchorTabID;
@property (copy, nonatomic) NSString *poiEnterID;
@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *poiBackendType;
@property (copy, nonatomic) NSString *poiDeviceSameCity;
@property (copy, nonatomic) NSDictionary *shootReward;
@property (copy, nonatomic) NSDictionary *mobParams;
@property (copy, nonatomic) NSDictionary *bottomBarParams;
@property (nonatomic) BOOL shouldShowUploadButton;
@property (nonatomic) BOOL useNewStyle;

- (void).cxx_destruct;

@end
