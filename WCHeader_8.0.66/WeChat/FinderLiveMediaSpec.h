@class NSString, NSMutableArray, LiveSdkVideoParams;

@interface FinderLiveMediaSpec : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *cdnTransInfo;
@property (retain, nonatomic) LiveSdkVideoParams *anchorVideoParams;
@property (nonatomic) unsigned int audienceCdnQualityCfg;
@property (retain, nonatomic) NSString *audienceCdnUrl;

+ (void)initialize;

- (void)setAudienceCdnUrl:(id)a0;
- (id)audienceCdnUrl;
- (void)setAudienceCdnQualityCfg:(unsigned int)a0;
- (unsigned int)audienceCdnQualityCfg;
- (void)setAnchorVideoParams:(id)a0;
- (id)anchorVideoParams;
- (void)setCdnTransInfo:(id)a0;
- (id)cdnTransInfo;

@end
