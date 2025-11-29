@class NSString, AWEPOIPhotoUploaderInfoModel;

@interface AWEPOIDetailPhotoInfo : AWEPOIDetailPhotoBaseInfo

@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *tabID;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEPOIPhotoUploaderInfoModel *uploader;

- (id)initWithAlbumPhoto:(id)a0;
- (void).cxx_destruct;

@end
