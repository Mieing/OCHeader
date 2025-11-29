@class NSString;

@interface WCMusicInfo : NSObject <NSCoding, PBCoding>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *singer;
@property (retain, nonatomic) NSString *webUrl;
@property (retain, nonatomic) NSString *dataUrl;
@property (retain, nonatomic) NSString *lowBandUrl;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *nsCoverImg;
@property (retain, nonatomic) NSString *nsCoverImgHD;
@property (retain, nonatomic) NSString *lyric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_singer;
+ (void)PBArrayAdd_webUrl;
+ (void)PBArrayAdd_dataUrl;
+ (void)PBArrayAdd_lowBandUrl;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_nsCoverImg;
+ (void)PBArrayAdd_nsCoverImgHD;
+ (void)PBArrayAdd_lyric;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValidForShow;
- (void).cxx_destruct;

@end
