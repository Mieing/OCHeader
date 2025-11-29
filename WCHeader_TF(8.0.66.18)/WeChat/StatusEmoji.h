@class NSString;

@interface StatusEmoji : WXPBGeneratedMessage

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

+ (void)initialize;

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
