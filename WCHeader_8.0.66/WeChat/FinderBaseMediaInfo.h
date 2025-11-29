@class NSString;

@interface FinderBaseMediaInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (nonatomic) float width;
@property (nonatomic) float height;
@property (retain, nonatomic) NSString *md5Sum;
@property (nonatomic) unsigned long long fileSize;

+ (void)initialize;

@end
