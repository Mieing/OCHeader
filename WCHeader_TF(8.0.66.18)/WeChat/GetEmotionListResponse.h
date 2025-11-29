@class BaseResponse, EmotionBanner, NSString, NSMutableArray, SKBuiltinBuffer_t;

@interface GetEmotionListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SKBuiltinBuffer_t *reqBuf;
@property (nonatomic) unsigned int emotionCount;
@property (retain, nonatomic) NSMutableArray *emotionList;
@property (retain, nonatomic) EmotionBanner *banner;
@property (nonatomic) unsigned int newBannerCount;
@property (retain, nonatomic) NSMutableArray *newBannerList;
@property (nonatomic) unsigned int cellCount;
@property (retain, nonatomic) NSMutableArray *cellList;
@property (nonatomic) unsigned int bannerSetCount;
@property (retain, nonatomic) NSMutableArray *bannerSetList;
@property (nonatomic) unsigned int topHotNum;
@property (nonatomic) unsigned int recentHotNum;
@property (nonatomic) unsigned int cellSetCount;
@property (retain, nonatomic) NSMutableArray *cellSetList;
@property (retain, nonatomic) NSString *emotionExptConfig;
@property (retain, nonatomic) SKBuiltinBuffer_t *emotionListBuf;
@property (retain, nonatomic) NSMutableArray *emotionSetInfo;
@property (nonatomic) unsigned int emotionSetInfoCount;
@property (nonatomic) unsigned long long reportRequestId;

+ (void)initialize;

- (void)setReportRequestId:(unsigned long long)a0;
- (unsigned long long)reportRequestId;
- (void)setEmotionSetInfoCount:(unsigned int)a0;
- (unsigned int)emotionSetInfoCount;
- (void)setEmotionSetInfo:(id)a0;
- (id)emotionSetInfo;
- (void)setEmotionListBuf:(id)a0;
- (id)emotionListBuf;
- (void)setEmotionExptConfig:(id)a0;
- (id)emotionExptConfig;
- (void)setCellSetList:(id)a0;
- (id)cellSetList;
- (void)setCellSetCount:(unsigned int)a0;
- (unsigned int)cellSetCount;
- (void)setRecentHotNum:(unsigned int)a0;
- (unsigned int)recentHotNum;
- (void)setTopHotNum:(unsigned int)a0;
- (unsigned int)topHotNum;
- (void)setBannerSetList:(id)a0;
- (id)bannerSetList;
- (void)setBannerSetCount:(unsigned int)a0;
- (unsigned int)bannerSetCount;
- (void)setCellList:(id)a0;
- (id)cellList;
- (void)setCellCount:(unsigned int)a0;
- (unsigned int)cellCount;
- (void)setNewBannerList:(id)a0;
- (id)newBannerList;
- (void)setNewBannerCount:(unsigned int)a0;
- (unsigned int)newBannerCount;
- (void)setBanner:(id)a0;
- (id)banner;
- (void)setEmotionList:(id)a0;
- (id)emotionList;
- (void)setEmotionCount:(unsigned int)a0;
- (unsigned int)emotionCount;
- (void)setReqBuf:(id)a0;
- (id)reqBuf;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
