@class NSString, UIImage, EditImageAttr, NSData, MMImageExifLogInfo;

@interface ImageInfo : NSObject <NSCopying>

@property (nonatomic) BOOL isEdited;
@property (retain, nonatomic) EditImageAttr *editImageAttr;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSData *imageData;
@property (nonatomic) unsigned int m_uiImageSource;
@property (retain, nonatomic) NSString *assetId;
@property (retain, nonatomic) MMImageExifLogInfo *exifLogInfo;
@property (retain, nonatomic) NSString *livePhotoVideoPath;
@property (retain, nonatomic) NSString *livePhotoHDVideoPath;
@property (retain, nonatomic) NSString *revokeBatchId;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
