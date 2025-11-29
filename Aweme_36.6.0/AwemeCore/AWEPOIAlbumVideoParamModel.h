@class NSString, NSDictionary;

@interface AWEPOIAlbumVideoParamModel : NSObject

@property (copy, nonatomic) NSString *poiEnterID;
@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *poiBackendType;
@property (copy, nonatomic) NSString *topItemID;
@property (copy, nonatomic) NSDictionary *mobParams;
@property (nonatomic) long long styleMode;

- (void).cxx_destruct;

@end
