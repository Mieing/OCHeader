@class NSString;

@interface StatusPublishMediaInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *mediaFilePath;
@property (retain, nonatomic) NSString *thumbFilePath;
@property (nonatomic) int mediaWidth;
@property (nonatomic) int mediaHeight;
@property (retain, nonatomic) NSString *mediaFileCacheKey;
@property (retain, nonatomic) NSString *thumbFileCacheKey;
@property (retain, nonatomic) NSString *mediaUrl;
@property (retain, nonatomic) NSString *thumbUrl;

+ (void)initialize;

@end
