@protocol BTBaseSectionDataDelegate;

@interface BTBaseSectionData : MMObject

@property (nonatomic) double sectionWidth;
@property (readonly, nonatomic) double viewHeight;
@property (readonly, nonatomic) unsigned long long sectionType;
@property (weak, nonatomic) id<BTBaseSectionDataDelegate> delegate;

+ (BOOL)isFunctionalSecionType:(unsigned long long)a0;

- (id)initWithSectionWidth:(double)a0;
- (long long)numberOfRowsInSection;
- (double)heightForRowInSection:(unsigned long long)a0;
- (id)identifierWithRow:(unsigned long long)a0;
- (void).cxx_destruct;

@end
