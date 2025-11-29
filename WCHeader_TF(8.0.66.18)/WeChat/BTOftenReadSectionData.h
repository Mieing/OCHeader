@class NSArray, NSString, BTOftenReadBarViewCell, MPChannelTopBarInfo;

@interface BTOftenReadSectionData : BTBaseSectionData

@property (retain, nonatomic) NSArray *brandContactArr;
@property (retain, nonatomic) MPChannelTopBarInfo *channelInfo;
@property (retain, nonatomic) NSString *forcePreposedUsername;
@property (retain, nonatomic) NSArray *itemViewModelArr;
@property (weak, nonatomic) BTOftenReadBarViewCell *barCellView;

- (id)initWithSectionWidth:(double)a0 oftenReadContactArr:(id)a1 channelInfo:(id)a2 forcePreposeUsername:(id)a3;
- (void)updateWithOftenReadContactArr:(id)a0 channelInfo:(id)a1 forcePreposeUsername:(id)a2;
- (void)updateWithChannelInfo:(id)a0;
- (unsigned long long)sectionType;
- (long long)numberOfRowsInSection;
- (double)heightForRowInSection:(unsigned long long)a0;
- (void)initItemViewModelList;
- (id)getPreposedContact;
- (id)genBrandBarItemViewModelWithContact:(id)a0;
- (id)getChannelInfo;
- (BOOL)hasVideoChannel;
- (BOOL)hasOftenReadContact;
- (unsigned int)brandCount;
- (unsigned int)brandWithGreenDotCount;
- (void).cxx_destruct;

@end
