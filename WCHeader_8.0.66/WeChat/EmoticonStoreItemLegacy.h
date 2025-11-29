@class NSString, NSArray, EmotionLinkInfo, PersonalDesigner;

@interface EmoticonStoreItemLegacy : MMObject <PBCoding>

@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *packName;
@property (copy, nonatomic) NSString *packDesc;
@property (copy, nonatomic) NSString *packAuthInfo;
@property (copy, nonatomic) NSString *packPrice;
@property (copy, nonatomic) NSString *packThumb;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *packCopyright;
@property (retain, nonatomic) NSArray *packEmojiInfoList;
@property (retain, nonatomic) NSString *timeLimit;
@property (retain, nonatomic) NSString *introduce;
@property (retain, nonatomic) NSString *tagUrl;
@property (retain, nonatomic) NSString *shareDesc;
@property (retain, nonatomic) NSString *oldRedirectUrl;
@property (retain, nonatomic) PersonalDesigner *personalDesigner;
@property (retain, nonatomic) NSString *designerIpsetKey;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int packType;
@property (nonatomic) unsigned int packFlag;
@property (nonatomic) unsigned int boughtTime;
@property (nonatomic) unsigned long long packWeCoinPrice;
@property (nonatomic) unsigned long long weCoinNum;
@property (retain, nonatomic) NSString *exptDesc;
@property (retain, nonatomic) EmotionLinkInfo *summaryLinkInfo;
@property (retain, nonatomic) EmotionLinkInfo *detailLinkInfo;
@property (retain, nonatomic) NSArray *previewEmojiInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_productID;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_packName;
+ (void)PBArrayAdd_packDesc;
+ (void)PBArrayAdd_packAuthInfo;
+ (void)PBArrayAdd_packPrice;
+ (void)PBArrayAdd_packType;
+ (void)PBArrayAdd_packFlag;
+ (void)PBArrayAdd_packThumb;
+ (void)PBArrayAdd_coverUrl;
+ (void)PBArrayAdd_boughtTime;
+ (void)PBArrayAdd_packCopyright;
+ (void)PBArrayAdd_timeLimit;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_introduce;
+ (void)PBArrayAdd_tagUrl;
+ (void)PBArrayAdd_shareDesc;
+ (void)PBArrayAdd_oldRedirectUrl;
+ (void)PBArrayAdd_personalDesigner;
+ (void)PBArrayAdd_exptDesc;
+ (void)PBArrayAdd_packEmojiInfoList;
+ (void)PBArrayAdd_weCoinNum;
+ (void)PBArrayAdd_packWeCoinPrice;
+ (void)PBArrayAdd_previewEmojiInfos;
+ (void)PBArrayAdd_summaryLinkInfo;
+ (void)PBArrayAdd_detailLinkInfo;
+ (void)initialize;
+ (id)getItemCacheRootDir;
+ (id)getItemCachePath:(id)a0;
+ (id)getMd5Pid:(id)a0;
+ (id)loadItemFromCache:(id)a0;
+ (void)removeLegacyCacheFor:(id)a0;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
