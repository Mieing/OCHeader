@class SnsScanCodeInfo, NSString, NSMutableArray, MediaSize;

@interface MediaObj : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *id;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int urlType;
@property (retain, nonatomic) NSString *thumb;
@property (nonatomic) unsigned int thumbType;
@property (nonatomic) unsigned int privated;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) MediaSize *mediaSize;
@property (retain, nonatomic) NSString *lowBandUrl;
@property (nonatomic) unsigned int lowBandUrlType;
@property (nonatomic) unsigned int localId;
@property (nonatomic) unsigned int noUpload;
@property (retain, nonatomic) NSString *userData;
@property (nonatomic) unsigned int subType;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *attachurl;
@property (retain, nonatomic) NSString *urlmd5;
@property (retain, nonatomic) NSString *attachmd5;
@property (nonatomic) unsigned int videoattachTotalTime;
@property (retain, nonatomic) NSString *attachthumburl;
@property (retain, nonatomic) NSString *attachsharetitle;
@property (nonatomic) unsigned int enc;
@property (nonatomic) unsigned long long enckey;
@property (retain, nonatomic) NSString *filenameMd5;
@property (retain, nonatomic) NSString *urlToken;
@property (nonatomic) unsigned int urlEncIdx;
@property (retain, nonatomic) NSString *urlEncKey;
@property (retain, nonatomic) NSString *thumbToken;
@property (nonatomic) unsigned int thumbEncIdx;
@property (retain, nonatomic) NSString *thumbEnckey;
@property (retain, nonatomic) NSString *videomd5;
@property (nonatomic) BOOL isAd;
@property (retain, nonatomic) NSString *songAlbumUrl;
@property (retain, nonatomic) NSString *songLyric;
@property (nonatomic) float videoDuration;
@property (nonatomic) int mediaType;
@property (retain, nonatomic) NSMutableArray *videoColdRule;
@property (retain, nonatomic) NSString *downloadFlag;
@property (retain, nonatomic) NSMutableArray *emotionSafeInfoList;
@property (retain, nonatomic) SnsScanCodeInfo *codeInfo;

+ (void)initialize;

@end
