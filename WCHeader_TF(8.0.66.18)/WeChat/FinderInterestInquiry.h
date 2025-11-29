@class NSString, FinderInterestInquiry_InquiryWording;

@interface FinderInterestInquiry : WXPBGeneratedMessage

@property (nonatomic) unsigned int showInterestInquiry;
@property (nonatomic) unsigned int delayShowTs;
@property (nonatomic) unsigned int showDuration;
@property (retain, nonatomic) FinderInterestInquiry_InquiryWording *wording;
@property (retain, nonatomic) NSString *fromSessionId;
@property (nonatomic) unsigned int needPrefetch;
@property (nonatomic) unsigned int needPreload;

+ (void)initialize;

- (void)setNeedPreload:(unsigned int)a0;
- (unsigned int)needPreload;
- (void)setNeedPrefetch:(unsigned int)a0;
- (unsigned int)needPrefetch;
- (void)setFromSessionId:(id)a0;
- (id)fromSessionId;
- (void)setWording:(id)a0;
- (id)wording;
- (void)setShowDuration:(unsigned int)a0;
- (unsigned int)showDuration;
- (void)setDelayShowTs:(unsigned int)a0;
- (unsigned int)delayShowTs;
- (void)setShowInterestInquiry:(unsigned int)a0;
- (unsigned int)showInterestInquiry;

@end
