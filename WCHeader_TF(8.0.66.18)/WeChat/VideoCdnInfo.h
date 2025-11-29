@class VideoCdnInfo_CdnInfo;

@interface VideoCdnInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int cdnScene;
@property (retain, nonatomic) VideoCdnInfo_CdnInfo *ctnInfo;
@property (retain, nonatomic) VideoCdnInfo_CdnInfo *mpInfo;
@property (nonatomic) unsigned int cdnSourceType;

+ (void)initialize;

@end
