@class NSString;

@interface ImgInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *aeskey;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *fileId;
@property (nonatomic) unsigned int midSize;
@property (nonatomic) unsigned int thumbSize;

+ (void)initialize;

@end
