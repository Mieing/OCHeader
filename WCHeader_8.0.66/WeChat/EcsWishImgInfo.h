@class NSString, EcsWishImgInfo_Color;

@interface EcsWishImgInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *aeskey;
@property (retain, nonatomic) NSString *fileid;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int width;
@property (retain, nonatomic) EcsWishImgInfo_Color *pickColor;
@property (nonatomic) unsigned int useWishImg;
@property (nonatomic) unsigned int filetype;
@property (nonatomic) unsigned int pickArgbColor;

+ (void)initialize;

@end
