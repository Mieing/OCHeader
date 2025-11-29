@class NSString, NSMutableArray;

@interface SecSdkImgInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *md5;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int width;
@property (retain, nonatomic) NSMutableArray *qrcodeTextList;
@property (retain, nonatomic) NSString *ocrText;
@property (nonatomic) unsigned int timestamp;
@property (retain, nonatomic) NSString *phash;
@property (retain, nonatomic) NSString *externalFilename;
@property (nonatomic) unsigned int watermarkFlag;

+ (void)initialize;

@end
