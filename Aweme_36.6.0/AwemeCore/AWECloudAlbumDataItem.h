@class NSString, UIImage, EcAsset, EcAlbum;

@interface AWECloudAlbumDataItem : NSObject <AWECloudAlbumDataItemProtocol>

@property (retain, nonatomic) Class cellClass;
@property (nonatomic) unsigned long long cellType;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) unsigned long long albumId;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long localNum;
@property (nonatomic) long long cloudNum;
@property (retain, nonatomic) EcAsset *cover;
@property (retain, nonatomic) UIImage *thumbnailImage;
@property (retain, nonatomic) EcAlbum *albumResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
