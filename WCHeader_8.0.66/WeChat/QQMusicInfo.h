@class NSString;

@interface QQMusicInfo : NSObject <PBCoding, NSCoding, NSCopying>

@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int songId;
@property (retain, nonatomic) NSString *songMid;
@property (retain, nonatomic) NSString *songName;
@property (retain, nonatomic) NSString *singerName;
@property (retain, nonatomic) NSString *albumName;
@property (retain, nonatomic) NSString *albumPic150X150;
@property (retain, nonatomic) NSString *albumPic300X300;
@property (retain, nonatomic) NSString *albumPic500X500;
@property (nonatomic) unsigned int songPlayTime;
@property (retain, nonatomic) NSString *songPlayUrl;
@property (retain, nonatomic) NSString *songPlayUrlHq;
@property (retain, nonatomic) NSString *songPlayUrlSq;
@property (retain, nonatomic) NSString *songPlayUrlStandard;
@property (retain, nonatomic) NSString *songH5Url;
@property (retain, nonatomic) NSString *songLyric;
@property (nonatomic) int copyright;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int songType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_songId;
+ (void)PBArrayAdd_songMid;
+ (void)PBArrayAdd_songName;
+ (void)PBArrayAdd_singerName;
+ (void)PBArrayAdd_albumName;
+ (void)PBArrayAdd_albumPic150X150;
+ (void)PBArrayAdd_albumPic300X300;
+ (void)PBArrayAdd_albumPic500X500;
+ (void)PBArrayAdd_songPlayTime;
+ (void)PBArrayAdd_songPlayUrl;
+ (void)PBArrayAdd_songPlayUrlHq;
+ (void)PBArrayAdd_songPlayUrlSq;
+ (void)PBArrayAdd_songPlayUrlStandard;
+ (void)PBArrayAdd_songH5Url;
+ (void)PBArrayAdd_songLyric;
+ (void)PBArrayAdd_copyright;
+ (void)PBArrayAdd_offset;
+ (void)PBArrayAdd_songType;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
