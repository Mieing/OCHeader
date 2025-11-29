@interface BrandProfileBaseSectionData : MMObject

@property (readonly, nonatomic) double sectionWidth;
@property (readonly, nonatomic) double sectionHeight;

- (id)initWithSectionWidth:(double)a0;
- (void)updateSectionWidth:(double)a0;
- (long long)numberOfRowsInSection;
- (double)heightForHeaderInSection;
- (double)heightForRowInSection:(unsigned long long)a0;

@end
