@class NSData, NSString, StatusPoiInfo, StatusFooterInfoWrapper, StatusVisibilityInfo, StatusEmoji, NSMutableArray, StatusExtraInfo, StatusCustomInfo;

@interface StatusRawData : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) StatusEmoji *emojiInfo;
@property (retain, nonatomic) StatusPoiInfo *poiInto;
@property (nonatomic) unsigned long long option;
@property (retain, nonatomic) StatusExtraInfo *extraInfo;
@property (retain, nonatomic) StatusCustomInfo *customInfo;
@property (retain, nonatomic) StatusVisibilityInfo *visibilityInfo;
@property (retain, nonatomic) NSMutableArray *mediaInfo;
@property (retain, nonatomic) StatusFooterInfoWrapper *footerInfo;
@property (retain, nonatomic) NSData *originBuffer;

+ (void)initialize;

- (void)setOriginBuffer:(id)a0;
- (id)originBuffer;
- (void)setFooterInfo:(id)a0;
- (id)footerInfo;
- (void)setMediaInfo:(id)a0;
- (id)mediaInfo;
- (void)setVisibilityInfo:(id)a0;
- (id)visibilityInfo;
- (void)setCustomInfo:(id)a0;
- (id)customInfo;
- (void)setExtraInfo:(id)a0;
- (id)extraInfo;
- (void)setOption:(unsigned long long)a0;
- (unsigned long long)option;
- (void)setPoiInto:(id)a0;
- (id)poiInto;
- (void)setEmojiInfo:(id)a0;
- (id)emojiInfo;
- (void)setDescription:(id)a0;
- (id)description;

@end
