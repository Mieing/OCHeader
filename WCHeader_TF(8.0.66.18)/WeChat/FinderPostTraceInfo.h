@class NSString;

@interface FinderPostTraceInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *traceKey;
@property (nonatomic) unsigned int uploadCdnStart;
@property (nonatomic) unsigned int uploadCdnEnd;
@property (nonatomic) unsigned int thumbHeight;
@property (nonatomic) unsigned int thumbWidth;
@property (nonatomic) unsigned int coverHeight;
@property (nonatomic) unsigned int coverWidth;
@property (nonatomic) unsigned int findpostTime;

+ (void)initialize;

- (void)setFindpostTime:(unsigned int)a0;
- (unsigned int)findpostTime;
- (void)setCoverWidth:(unsigned int)a0;
- (unsigned int)coverWidth;
- (void)setCoverHeight:(unsigned int)a0;
- (unsigned int)coverHeight;
- (void)setThumbWidth:(unsigned int)a0;
- (unsigned int)thumbWidth;
- (void)setThumbHeight:(unsigned int)a0;
- (unsigned int)thumbHeight;
- (void)setUploadCdnEnd:(unsigned int)a0;
- (unsigned int)uploadCdnEnd;
- (void)setUploadCdnStart:(unsigned int)a0;
- (unsigned int)uploadCdnStart;
- (void)setTraceKey:(id)a0;
- (id)traceKey;

@end
