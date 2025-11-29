@class NSString, EmotionBannerSetJumpInfo, EmotionBannerImg;

@interface EmotionBannerSet : WXPBGeneratedMessage

@property (retain, nonatomic) EmotionBannerImg *bannerImg;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *locateUrl;
@property (nonatomic) unsigned int id;
@property (retain, nonatomic) NSString *secondUrl;
@property (nonatomic) unsigned int setType;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *tagUrl;
@property (retain, nonatomic) NSString *setKey;
@property (retain, nonatomic) EmotionBannerSetJumpInfo *emotionBannerSetJumpInfo;

+ (void)initialize;

- (void)setEmotionBannerSetJumpInfo:(id)a0;
- (id)emotionBannerSetJumpInfo;
- (void)setSetKey:(id)a0;
- (id)setKey;
- (void)setTagUrl:(id)a0;
- (id)tagUrl;
- (void)setProductId:(id)a0;
- (id)productId;
- (void)setDesc:(id)a0;
- (id)desc;
- (void)setIconUrl:(id)a0;
- (id)iconUrl;
- (void)setSetType:(unsigned int)a0;
- (unsigned int)setType;
- (void)setSecondUrl:(id)a0;
- (id)secondUrl;
- (void)setId:(unsigned int)a0;
- (unsigned int)id;
- (void)setLocateUrl:(id)a0;
- (id)locateUrl;
- (void)setTitle:(id)a0;
- (id)title;
- (void)setBannerImg:(id)a0;
- (id)bannerImg;

@end
