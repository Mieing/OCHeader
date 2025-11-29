@class NSString, IESLLPOIPhotoUploaderInfoModel;

@interface IESLLPOIDetailPhotoInfo : IESLLPOIDetailPhotoBaseInfo

@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *tabID;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) IESLLPOIPhotoUploaderInfoModel *uploader;

- (id)initWithAlbumPhoto:(id)a0;
- (void).cxx_destruct;

@end
