@class NSString, EmojiStatisticsInfo;

@interface EmojiInfoObj : MMObject <PBCoding, NSCopying>

@property (nonatomic) BOOL hasSetEmoticonFlag;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) NSString *designerId;
@property (retain, nonatomic) NSString *encryptUrl;
@property (retain, nonatomic) NSString *aesKey;
@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *externUrl;
@property (retain, nonatomic) NSString *externMd5;
@property (retain, nonatomic) NSString *activityId;
@property (retain, nonatomic) NSString *attachedText;
@property (retain, nonatomic) NSString *attachedTextColor;
@property (retain, nonatomic) NSString *lensId;
@property (retain, nonatomic) NSString *emojiAttr;
@property (retain, nonatomic) NSString *linkId;
@property (retain, nonatomic) NSString *storeMeaning;
@property (retain, nonatomic) EmojiStatisticsInfo *staticsInfo;
@property (retain, nonatomic) NSString *generatedBusinessThumbUrl;
@property (nonatomic) unsigned long long flag;
@property (nonatomic) BOOL disableExtern;
@property (retain, nonatomic) NSString *tpUrlString;
@property (retain, nonatomic) NSString *authkey;
@property (nonatomic) struct CGSize { double width; double height; } imgSize;
@property (nonatomic) struct CGSize { double width; double height; } wxamImageSizeToCheck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_designerId;
+ (void)PBArrayAdd_encryptUrl;
+ (void)PBArrayAdd_aesKey;
+ (void)PBArrayAdd_productId;
+ (void)PBArrayAdd_externUrl;
+ (void)PBArrayAdd_attachedText;
+ (void)PBArrayAdd_externMd5;
+ (void)PBArrayAdd_activityId;
+ (void)PBArrayAdd_attachedTextColor;
+ (void)PBArrayAdd_lensId;
+ (void)PBArrayAdd_linkId;
+ (void)PBArrayAdd_storeMeaning;
+ (void)PBArrayAdd_emojiAttr;
+ (void)PBArrayAdd_staticsInfo;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)emojiInfo;
- (id)initWithEmojiInfo:(id)a0;
- (id)initWithPackThumbExt:(id)a0 pid:(id)a1;
- (void)copyDownloadInfoFromMsg:(id)a0;
- (BOOL)isStoreEmoticon;
- (BOOL)isOriginalEmoticon;
- (BOOL)hasWxAMDownloadInfo;
- (BOOL)hasEncryptDownloadInfo;
- (BOOL)canCdnDownload;
- (BOOL)hasTpDownloadInfo;
- (void).cxx_destruct;

@end
