@class NSString, ACCImageAlbumImageMediaInfo;

@interface AWEImageAlbumAssetExportItemBase : NSObject <AWEImageAlbumAssetExportItemProtocol>

@property (nonatomic) long long index;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double imageScale;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) ACCImageAlbumImageMediaInfo *imageTrackInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
