@class NSString;

@interface MMMusicMVSongInfo : NSObject <PBCoding, NSCopying>

@property (retain, nonatomic) NSString *songName;
@property (retain, nonatomic) NSString *singer;
@property (retain, nonatomic) NSString *musicDataUrl;
@property (retain, nonatomic) NSString *musicAppId;
@property (retain, nonatomic) NSString *musicWebUrl;
@property (retain, nonatomic) NSString *songId;
@property (retain, nonatomic) NSString *musicID;
@property (retain, nonatomic) NSString *lyric;
@property (retain, nonatomic) NSString *albumName;
@property (retain, nonatomic) NSString *albumUrl;
@property (retain, nonatomic) NSString *genre;
@property (nonatomic) double publicTime;
@property (retain, nonatomic) NSString *extraInfo;
@property (retain, nonatomic) NSString *identification;
@property (nonatomic) unsigned int duration;
@property (copy, nonatomic) NSString *customSongId;
@property (copy, nonatomic) NSString *lowerQualityImagePath;
@property (copy, nonatomic) NSString *musicOperationUrl;
@property (copy, nonatomic) NSString *mid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_songName;
+ (void)PBArrayAdd_singer;
+ (void)PBArrayAdd_musicDataUrl;
+ (void)PBArrayAdd_musicAppId;
+ (void)PBArrayAdd_musicWebUrl;
+ (void)PBArrayAdd_songId;
+ (void)PBArrayAdd_musicID;
+ (void)PBArrayAdd_albumName;
+ (void)PBArrayAdd_genre;
+ (void)PBArrayAdd_publicTime;
+ (void)PBArrayAdd_extraInfo;
+ (void)PBArrayAdd_identification;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_albumUrl;
+ (void)PBArrayAdd_lyric;
+ (void)PBArrayAdd_musicOperationUrl;
+ (void)PBArrayAdd_mid;
+ (void)initialize;
+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)getPBPropertyTable;
- (id)initWithMusicInfo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isDetailInfoFulfilled;
- (id)toXML;
- (void).cxx_destruct;

@end
