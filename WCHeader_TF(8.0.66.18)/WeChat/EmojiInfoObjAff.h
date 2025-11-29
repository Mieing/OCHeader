@class NSString, EmojiStatisticsInfo;

@interface EmojiInfoObjAff : WXPBGeneratedMessage

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
@property (nonatomic) BOOL disableExtern;
@property (retain, nonatomic) NSString *tpUrlString;
@property (retain, nonatomic) NSString *authkey;
@property (nonatomic) float wxamImageSizeToCheckWidth;
@property (nonatomic) float wxamImageSizeToCheckHeight;
@property (retain, nonatomic) NSString *generatedBusinessThumbUrl;

+ (void)initialize;

@end
