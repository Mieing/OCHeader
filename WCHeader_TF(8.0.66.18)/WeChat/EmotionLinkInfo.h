@class NSString;

@interface EmotionLinkInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int linkType;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *linkUrl;
@property (nonatomic) unsigned int iconWidth;
@property (nonatomic) unsigned int iconHeight;
@property (retain, nonatomic) NSString *reportInfo;
@property (nonatomic) unsigned int linkId;
@property (nonatomic) unsigned long long linkFlag;

+ (void)initialize;

- (void)setLinkFlag:(unsigned long long)a0;
- (unsigned long long)linkFlag;
- (void)setLinkId:(unsigned int)a0;
- (unsigned int)linkId;
- (void)setReportInfo:(id)a0;
- (id)reportInfo;
- (void)setIconHeight:(unsigned int)a0;
- (unsigned int)iconHeight;
- (void)setIconWidth:(unsigned int)a0;
- (unsigned int)iconWidth;
- (void)setLinkUrl:(id)a0;
- (id)linkUrl;
- (void)setDesc:(id)a0;
- (id)desc;
- (void)setIconUrl:(id)a0;
- (id)iconUrl;
- (void)setLinkType:(unsigned int)a0;
- (unsigned int)linkType;

@end
