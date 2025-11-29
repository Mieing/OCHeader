@class NSString;

@interface FinderProgressPreviewUrlInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *urlToken;
@property (nonatomic) unsigned int fileSize;
@property (retain, nonatomic) NSString *md5Sum;

+ (void)initialize;

@end
