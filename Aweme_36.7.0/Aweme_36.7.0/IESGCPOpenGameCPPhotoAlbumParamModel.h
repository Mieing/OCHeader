@class NSNumber, NSString;

@interface IESGCPOpenGameCPPhotoAlbumParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *maxImageCount;
@property (copy, nonatomic) NSString *privacyCert;
@property (copy, nonatomic) NSString *bottomViewTitle;
@property (copy, nonatomic) NSString *nextButtonTitle;
@property (copy, nonatomic) NSString *limitTips;
@property (retain, nonatomic) NSNumber *selectedImageCount;
@property (retain, nonatomic) NSNumber *maxFileSize;
@property (copy, nonatomic) NSString *gameID;
@property (copy, nonatomic) NSString *userID;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;
- (id)init;

@end
