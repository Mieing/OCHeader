@class NSString;

@interface PreDownloadInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int preDownloadPercent;
@property (nonatomic) unsigned int preDownloadNetType;
@property (retain, nonatomic) NSString *noPreDownloadRange;

+ (void)initialize;

- (void)setNoPreDownloadRange:(id)a0;
- (id)noPreDownloadRange;
- (void)setPreDownloadNetType:(unsigned int)a0;
- (unsigned int)preDownloadNetType;
- (void)setPreDownloadPercent:(unsigned int)a0;
- (unsigned int)preDownloadPercent;

@end
