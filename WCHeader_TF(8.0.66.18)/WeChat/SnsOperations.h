@class DelayInfo, Preload, QuestionBar, SocialInfluenceInfo, RepeatUrl;

@interface SnsOperations : WXPBGeneratedMessage

@property (nonatomic) unsigned int snsOperationsFlag;
@property (retain, nonatomic) SocialInfluenceInfo *socialInfluenceInfo;
@property (retain, nonatomic) QuestionBar *bar;
@property (retain, nonatomic) DelayInfo *delayinfo;
@property (retain, nonatomic) Preload *preload;
@property (retain, nonatomic) RepeatUrl *repeaturl;

+ (void)initialize;

- (void)setRepeaturl:(id)a0;
- (id)repeaturl;
- (void)setPreload:(id)a0;
- (id)preload;
- (void)setDelayinfo:(id)a0;
- (id)delayinfo;
- (void)setBar:(id)a0;
- (id)bar;
- (void)setSocialInfluenceInfo:(id)a0;
- (id)socialInfluenceInfo;
- (void)setSnsOperationsFlag:(unsigned int)a0;
- (unsigned int)snsOperationsFlag;

@end
