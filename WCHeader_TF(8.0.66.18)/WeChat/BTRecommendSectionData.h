@class NSArray, NSMutableDictionary, BTRecommendMsgData;

@interface BTRecommendSectionData : BTMsgSectionData <BrandTimelineMsgMgrExt>

@property (retain, nonatomic) NSMutableDictionary *cachedRowHeightMap;
@property (readonly, nonatomic) BTRecommendMsgData *recommendData;
@property (readonly, nonatomic) NSArray *arrAccountData;
@property (readonly, nonatomic) BOOL isMsgTopRightUseRecReason;

+ (BOOL)canCreateSectionDataWithMsgWrap:(id)a0;

- (id)initWithMsgWrap:(id)a0 sectionWidth:(double)a1 displayMode:(unsigned int)a2 delegate:(id)a3;
- (void)updateMsgWrap:(id)a0;
- (void)initOrUpdateItemViewModelArr;
- (long long)numberOfRowsInSection;
- (double)heightForRowInSection:(unsigned long long)a0;
- (double)heightForSectionFooter;
- (void)updateHeight:(double)a0 forRow:(long long)a1;
- (unsigned long long)sectionType;
- (void)onFinderRecommendCardDidDeleteFinderCardDataWithObjectIdArr:(id)a0 msgWrapBrandTimelineMsgId:(unsigned int)a1;
- (void)updateDataWithObjectIdArr:(id)a0;
- (void).cxx_destruct;

@end
