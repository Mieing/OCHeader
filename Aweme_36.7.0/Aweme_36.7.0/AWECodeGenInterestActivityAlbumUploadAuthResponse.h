@class AWECodeGenImageXAuthDataModel, AWECodeGenInterestActivityVideoUploadAuthDataModel;

@interface AWECodeGenInterestActivityAlbumUploadAuthResponse : AWEBaseResponseModel

@property (nonatomic) BOOL canUpload;
@property (retain, nonatomic) AWECodeGenImageXAuthDataModel *imageAuthDataModel;
@property (retain, nonatomic) AWECodeGenInterestActivityVideoUploadAuthDataModel *videoAuthDataModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
