@class NSString;

@interface WCRedEnvelopesSelectSkinRedDotInfo : NSObject <PBCoding>

@property (nonatomic) BOOL isShow;
@property (retain, nonatomic) NSString *wording_cn;
@property (retain, nonatomic) NSString *wording_hk;
@property (retain, nonatomic) NSString *wording_tw;
@property (retain, nonatomic) NSString *wording_en;
@property (retain, nonatomic) NSString *iconUrl;
@property (nonatomic) long long exposureTimes;
@property (nonatomic) long long invalidateTime;
@property (retain, nonatomic) NSString *version;
@property (nonatomic) long long effectiveTime;
@property (nonatomic) long long reddotType;
@property (nonatomic) BOOL selectskinpage_is_show;
@property (nonatomic) long long selectskinpage_exposureTimes;
@property (nonatomic) long long selectskinpage_invalidateTime;
@property (retain, nonatomic) NSString *tagName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_isShow;
+ (void)PBArrayAdd_wording_cn;
+ (void)PBArrayAdd_wording_hk;
+ (void)PBArrayAdd_wording_tw;
+ (void)PBArrayAdd_wording_en;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_exposureTimes;
+ (void)PBArrayAdd_invalidateTime;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_effectiveTime;
+ (void)PBArrayAdd_reddotType;
+ (void)PBArrayAdd_selectskinpage_is_show;
+ (void)PBArrayAdd_selectskinpage_exposureTimes;
+ (void)PBArrayAdd_selectskinpage_invalidateTime;
+ (void)PBArrayAdd_tagName;
+ (void)initialize;
+ (BOOL)isVersionExist:(id)a0;
+ (void)clearLocalRedDotInfo;
+ (void)saveVersion:(id)a0;
+ (void)saveClickReddotTime:(unsigned int)a0;
+ (unsigned int)getClickReddotTime;
+ (id)getMMKV;
+ (id)InfoFromCoverSetRedDotInfo:(id)a0;
+ (id)CurrentRedDot;
+ (unsigned int)getEffectiveEndTime;
+ (void)saveEffectiveEndTime:(unsigned int)a0;
+ (BOOL)isSkinPlazaClicked;
+ (void)setSkinPlazaClicked;
+ (void)addVersionToNeverShowList:(id)a0;
+ (BOOL)isVersionInNeverShowList:(id)a0;

@end
