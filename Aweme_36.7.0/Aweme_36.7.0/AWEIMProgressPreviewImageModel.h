@class NSString, AWEImageAlbumImageModel, AWEAwemeModel;

@interface AWEIMProgressPreviewImageModel : NSObject <AFDProgressPreviewImageModelProtocol>

@property (retain, nonatomic) AWEImageAlbumImageModel *imageModel;
@property (nonatomic) long long indexInMultiContent;
@property (weak, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)previewImageType;
- (id /* block */)imageRefreshBlock;
- (void).cxx_destruct;

@end
