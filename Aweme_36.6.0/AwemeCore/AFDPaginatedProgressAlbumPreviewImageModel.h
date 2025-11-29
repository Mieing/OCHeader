@class NSString, AWEImageAlbumImageModel, AWEAwemeModel;

@interface AFDPaginatedProgressAlbumPreviewImageModel : AWEImageAlbumImageModel <AFDProgressPreviewImageModelProtocol>

@property (retain, nonatomic) AWEImageAlbumImageModel *imageModel;
@property (nonatomic) long long indexInMultiContent;
@property (weak, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)previewImageType;
- (void).cxx_destruct;
- (id)initWith:(id)a0;

@end
