@class NSString;

@interface SnsMusicItem : NSObject <PBCoding, NSCoding, NSCopying>

@property (retain, nonatomic) NSString *musicName;
@property (retain, nonatomic) NSString *singer;
@property (retain, nonatomic) NSString *albumName;
@property (retain, nonatomic) NSString *coverImageUrl;
@property (retain, nonatomic) NSString *lyrics;
@property (retain, nonatomic) NSString *musicUrl;
@property (retain, nonatomic) NSString *musicLowBandUrl;
@property (retain, nonatomic) NSString *webUrl;
@property (retain, nonatomic) NSString *musicID;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *coverHDImageUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_musicName;
+ (void)PBArrayAdd_singer;
+ (void)PBArrayAdd_albumName;
+ (void)PBArrayAdd_coverImageUrl;
+ (void)PBArrayAdd_lyrics;
+ (void)PBArrayAdd_musicUrl;
+ (void)PBArrayAdd_musicLowBandUrl;
+ (void)PBArrayAdd_webUrl;
+ (void)PBArrayAdd_musicID;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_coverHDImageUrl;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
