@class GetRecommendFeedsResp_RecommendCardMsg, NSMutableDictionary, NSString;

@interface BTRecoFlowSectionData : BTBaseSectionData

@property (retain, nonatomic) GetRecommendFeedsResp_RecommendCardMsg *cardMsg;
@property (retain, nonatomic) NSMutableDictionary *cachedRowHeightMap;
@property (nonatomic) BOOL isExposed;
@property (copy, nonatomic) NSString *titleTag;

+ (BOOL)canCreateSectionDataWithCardMsg:(id)a0;

- (id)initWithSectionWidth:(double)a0 cardMsg:(id)a1;
- (void)dealloc;
- (unsigned long long)sectionType;
- (long long)numberOfRowsInSection;
- (double)heightForRowInSection:(unsigned long long)a0;
- (void)updateHeight:(double)a0 forRow:(long long)a1;
- (double)heightForSectionFooter;
- (id)identifierWithRow:(unsigned long long)a0;
- (void).cxx_destruct;

@end
