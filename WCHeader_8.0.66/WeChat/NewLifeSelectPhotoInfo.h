@class NSString, NewLifePhotoExtInfo, NewLifePhotoCropInfo, NewLifePictureCropInfo;

@interface NewLifeSelectPhotoInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *photoId;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (retain, nonatomic) NewLifePhotoCropInfo *cropInfo;
@property (retain, nonatomic) NewLifePhotoExtInfo *photoExtInfo;
@property (retain, nonatomic) NewLifePictureCropInfo *regionInfo;

+ (void)initialize;

@end
