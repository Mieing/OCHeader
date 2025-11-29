@class FinderMediaCodecInfo, FinderMediaDebug, FinderHdrMediaSpecList, FinderProgressPreviewInfo, NSMutableArray, FinderHalfRect, FinderObjectScalingInfo, NSString, FinderCoverScalingInfo, FinderMediaCdnInfo, FinderBaseMediaInfo, FinderLivePhotoMediaInfo, FinderLocation, NSData, FinderLiveMediaSpec, FinderHlsMediaSpecList;

@interface FinderMedia : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *thumbUrl;
@property (nonatomic) unsigned int mediaType;
@property (nonatomic) unsigned int videoPlayLen;
@property (nonatomic) float width;
@property (nonatomic) float height;
@property (retain, nonatomic) NSString *md5Sum;
@property (nonatomic) unsigned int fileSize;
@property (nonatomic) int bitrate;
@property (retain, nonatomic) NSMutableArray *spec;
@property (retain, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSString *decodeKey;
@property (retain, nonatomic) NSString *urlToken;
@property (retain, nonatomic) NSString *thumbUrlToken;
@property (retain, nonatomic) NSString *coverUrlToken;
@property (retain, nonatomic) FinderMediaCodecInfo *codecInfo;
@property (retain, nonatomic) FinderLiveMediaSpec *liveSpec;
@property (retain, nonatomic) FinderHlsMediaSpecList *hlsSpec;
@property (nonatomic) unsigned int hotFlag;
@property (retain, nonatomic) FinderHalfRect *halfRect;
@property (retain, nonatomic) NSString *fullThumbUrl;
@property (retain, nonatomic) NSString *fullThumbUrlToken;
@property (retain, nonatomic) NSString *fullUrl;
@property (nonatomic) float fullWidth;
@property (nonatomic) float fullHeight;
@property (retain, nonatomic) NSString *fullMd5Sum;
@property (nonatomic) unsigned int fullFileSize;
@property (nonatomic) int fullBitrate;
@property (retain, nonatomic) NSString *fullUrlToken;
@property (retain, nonatomic) NSString *fullCoverUrl;
@property (retain, nonatomic) NSString *fullCoverUrlToken;
@property (retain, nonatomic) FinderHdrMediaSpecList *hdrSpec;
@property (retain, nonatomic) NSMutableArray *liveCoverImgs;
@property (retain, nonatomic) FinderObjectScalingInfo *scalingInfo;
@property (nonatomic) unsigned int cardShowStyle;
@property (nonatomic) unsigned int dynamicRangeType;
@property (nonatomic) unsigned int videoType;
@property (nonatomic) unsigned long long duplicateFileSize;
@property (retain, nonatomic) NSMutableArray *audioSpec;
@property (retain, nonatomic) FinderMediaCdnInfo *mediaCdnInfo;
@property (nonatomic) unsigned long long specVersion;
@property (retain, nonatomic) NSString *rawCoverUrl;
@property (retain, nonatomic) FinderCoverScalingInfo *coverScalingInfo;
@property (retain, nonatomic) FinderMediaDebug *debugInfo;
@property (retain, nonatomic) FinderBaseMediaInfo *wxam3;
@property (retain, nonatomic) NSString *livephotoUrl;
@property (retain, nonatomic) NSString *urlOriginalCheckSum;
@property (retain, nonatomic) NSString *urlCalculateCheckSum;
@property (retain, nonatomic) FinderLivePhotoMediaInfo *livephoto;
@property (retain, nonatomic) NSString *videoTitle;
@property (retain, nonatomic) NSString *nonWatermarkUrl;
@property (retain, nonatomic) NSString *shareCoverUrl;
@property (retain, nonatomic) NSString *shareCoverUrlToken;
@property (nonatomic) unsigned int shareCoverShowStyle;
@property (nonatomic) unsigned long long cdnFileSize;
@property (retain, nonatomic) NSData *mediaCdnInfoBytes;
@property (retain, nonatomic) FinderLocation *poiInfo;
@property (retain, nonatomic) FinderProgressPreviewInfo *progressPreview;

+ (void)initialize;

@end
