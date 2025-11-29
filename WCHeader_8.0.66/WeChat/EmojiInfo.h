@class NSString, NSMutableArray, EmojiStatisticsInfo;

@interface EmojiInfo : WXPBGeneratedMessage

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
@property (nonatomic) unsigned long long flag;
@property (retain, nonatomic) NSMutableArray *customMeaning;
@property (retain, nonatomic) NSString *payAnimateResUrl;
@property (retain, nonatomic) EmojiStatisticsInfo *statistics;
@property (retain, nonatomic) NSString *generatedBusinessThumbUrl;

+ (void)initialize;

- (void)setGeneratedBusinessThumbUrl:(id)a0;
- (id)generatedBusinessThumbUrl;
- (void)setStatistics:(id)a0;
- (id)statistics;
- (void)setPayAnimateResUrl:(id)a0;
- (id)payAnimateResUrl;
- (void)setCustomMeaning:(id)a0;
- (id)customMeaning;
- (void)setFlag:(unsigned long long)a0;
- (unsigned long long)flag;
- (void)setStoreMeaning:(id)a0;
- (id)storeMeaning;
- (void)setLinkId:(id)a0;
- (id)linkId;
- (void)setEmojiAttr:(id)a0;
- (id)emojiAttr;
- (void)setLensId:(id)a0;
- (id)lensId;
- (void)setAttachedTextColor:(id)a0;
- (id)attachedTextColor;
- (void)setAttachedText:(id)a0;
- (id)attachedText;
- (void)setActivityId:(id)a0;
- (id)activityId;
- (void)setExternMd5:(id)a0;
- (id)externMd5;
- (void)setExternUrl:(id)a0;
- (id)externUrl;
- (void)setProductId:(id)a0;
- (id)productId;
- (void)setAesKey:(id)a0;
- (id)aesKey;
- (void)setEncryptUrl:(id)a0;
- (id)encryptUrl;
- (void)setDesignerId:(id)a0;
- (id)designerId;
- (void)setThumbUrl:(id)a0;
- (id)thumbUrl;
- (void)setUrl:(id)a0;
- (id)url;
- (void)setMd5:(id)a0;
- (id)md5;

@end
