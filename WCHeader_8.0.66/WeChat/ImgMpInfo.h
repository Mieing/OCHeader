@class NSString;

@interface ImgMpInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *imageId;
@property (retain, nonatomic) NSString *articleUrl;
@property (nonatomic) unsigned int itemShowType;
@property (nonatomic) unsigned long long bizuin;
@property (nonatomic) unsigned long long mid;
@property (nonatomic) unsigned int idx;

+ (void)initialize;

@end
