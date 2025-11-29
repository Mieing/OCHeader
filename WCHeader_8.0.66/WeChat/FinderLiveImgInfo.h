@class NSString;

@interface FinderLiveImgInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *urlToken;
@property (nonatomic) unsigned int fileSize;
@property (nonatomic) float width;
@property (nonatomic) float height;
@property (nonatomic) int ratio;

+ (void)initialize;

- (void)setRatio:(int)a0;
- (int)ratio;
- (void)setHeight:(float)a0;
- (float)height;
- (void)setWidth:(float)a0;
- (float)width;
- (void)setFileSize:(unsigned int)a0;
- (unsigned int)fileSize;
- (void)setUrlToken:(id)a0;
- (id)urlToken;
- (void)setUrl:(id)a0;
- (id)url;

@end
