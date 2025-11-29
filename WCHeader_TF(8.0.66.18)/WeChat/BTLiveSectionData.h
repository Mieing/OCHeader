@class BrandFinderLiveInfo, NSArray, BTLiveSectionBarCellView;

@interface BTLiveSectionData : BTBaseSectionData

@property (nonatomic) BOOL isLiveBarExpand;
@property (retain, nonatomic) BrandFinderLiveInfo *redDotLiveInfo;
@property (retain, nonatomic) NSArray *arrLiveInfo;
@property (retain, nonatomic) NSArray *arrItemViewModel;
@property (weak, nonatomic) BTLiveSectionBarCellView *cellView;
@property (readonly, nonatomic) BOOL isExpand;

- (id)initWithSectionWidth:(double)a0 arrLiveInfo:(id)a1 mainCellRedDotLiveInfo:(id)a2 delegate:(id)a3;
- (void)setIsExpand:(BOOL)a0;
- (void)updateWithArrLiveInfo:(id)a0 mainCellRedDotLiveInfo:(id)a1;
- (unsigned long long)sectionType;
- (long long)numberOfRowsInSection;
- (double)heightForRowInSection:(unsigned long long)a0;
- (void)initItemViewModelList;
- (id)genItemViewModelWithLiveInfo:(id)a0;
- (void).cxx_destruct;

@end
