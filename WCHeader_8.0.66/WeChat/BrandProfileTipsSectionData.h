@class NSString;

@interface BrandProfileTipsSectionData : BrandProfileBaseSectionData

@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) NSString *tipsWording;

- (long long)numberOfRowsInSection;
- (double)heightForHeaderInSection;
- (double)heightForRowInSection:(unsigned long long)a0;
- (unsigned long long)sectionType;
- (void).cxx_destruct;

@end
