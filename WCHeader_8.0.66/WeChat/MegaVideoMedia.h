@class FinderHalfRect, NSString, FinderHdrMediaSpecList, ScalingInfo, FinderMediaSpecList, NSMutableArray, FinderHlsMediaSpecList;

@interface MegaVideoMedia : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *thumbUrl;
@property (nonatomic) unsigned int mediaType;
@property (nonatomic) unsigned int videoPlayLen;
@property (nonatomic) float width;
@property (nonatomic) float height;
@property (retain, nonatomic) NSString *md5Sum;
@property (nonatomic) unsigned int fileSize;
@property (nonatomic) int bitrate;
@property (retain, nonatomic) NSString *decodeKey;
@property (retain, nonatomic) NSString *coverUrl;
@property (nonatomic) unsigned long long videoPlayLenMs;
@property (retain, nonatomic) NSString *urlToken;
@property (retain, nonatomic) NSString *thumbUrlToken;
@property (retain, nonatomic) NSString *coverUrlToken;
@property (retain, nonatomic) NSMutableArray *spec;
@property (retain, nonatomic) FinderHlsMediaSpecList *hlsSpec;
@property (retain, nonatomic) FinderMediaSpecList *mediaSpec;
@property (nonatomic) unsigned int hotFlag;
@property (retain, nonatomic) FinderHalfRect *halfRect;
@property (retain, nonatomic) NSString *fullThumbUrl;
@property (retain, nonatomic) NSString *fullThumbUrlToken;
@property (retain, nonatomic) FinderHdrMediaSpecList *hdrSpec;
@property (retain, nonatomic) NSString *fullCoverUrl;
@property (retain, nonatomic) ScalingInfo *scalingInfo;

+ (void)initialize;

@end
