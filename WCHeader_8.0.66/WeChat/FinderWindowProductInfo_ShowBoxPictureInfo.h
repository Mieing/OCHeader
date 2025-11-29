@class NSString;

@interface FinderWindowProductInfo_ShowBoxPictureInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int picInfoType;
@property (retain, nonatomic) NSString *picUrl;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned int hasFrame;
@property (retain, nonatomic) NSString *frameRbga;

+ (void)initialize;

@end
