@interface BizMsgReSortConfig : WXPBGeneratedMessage

@property (nonatomic) BOOL retrieveInvalidExposureCard;
@property (nonatomic) unsigned int validExposureAreaRatio;
@property (nonatomic) unsigned int validExposurePeriod;
@property (nonatomic) BOOL redDotSample;
@property (nonatomic) BOOL recMsgReportSample;
@property (nonatomic) unsigned int recMsgReportMaxCount;
@property (nonatomic) unsigned int recommendReasonMode;

+ (void)initialize;

- (void)setRecommendReasonMode:(unsigned int)a0;
- (unsigned int)recommendReasonMode;
- (void)setRecMsgReportMaxCount:(unsigned int)a0;
- (unsigned int)recMsgReportMaxCount;
- (void)setRecMsgReportSample:(BOOL)a0;
- (BOOL)recMsgReportSample;
- (void)setRedDotSample:(BOOL)a0;
- (BOOL)redDotSample;
- (void)setValidExposurePeriod:(unsigned int)a0;
- (unsigned int)validExposurePeriod;
- (void)setValidExposureAreaRatio:(unsigned int)a0;
- (unsigned int)validExposureAreaRatio;
- (void)setRetrieveInvalidExposureCard:(BOOL)a0;
- (BOOL)retrieveInvalidExposureCard;

@end
