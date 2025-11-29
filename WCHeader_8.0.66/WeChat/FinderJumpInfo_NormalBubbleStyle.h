@class NSString, FinderColor;

@interface FinderJumpInfo_NormalBubbleStyle : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSString *recommendReason;
@property (retain, nonatomic) NSString *bgColor;
@property (retain, nonatomic) NSString *arrowColor;
@property (retain, nonatomic) NSString *fontColor;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) FinderColor *subtitleColor;
@property (nonatomic) BOOL showRightArrow;

+ (void)initialize;

- (void)setShowRightArrow:(BOOL)a0;
- (BOOL)showRightArrow;
- (void)setSubtitleColor:(id)a0;
- (id)subtitleColor;
- (void)setSubtitle:(id)a0;
- (id)subtitle;
- (void)setFontColor:(id)a0;
- (id)fontColor;
- (void)setArrowColor:(id)a0;
- (id)arrowColor;
- (void)setBgColor:(id)a0;
- (id)bgColor;
- (void)setRecommendReason:(id)a0;
- (id)recommendReason;
- (void)setWording:(id)a0;
- (id)wording;
- (void)setIconUrl:(id)a0;
- (id)iconUrl;

@end
