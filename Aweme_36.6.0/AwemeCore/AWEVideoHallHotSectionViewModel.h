@class AWEVideoHallBlockInfo, NSString;

@interface AWEVideoHallHotSectionViewModel : AWELVideoAlbumBaseSectionViewModel

@property (retain, nonatomic) AWEVideoHallBlockInfo *block;
@property (copy, nonatomic) NSString *headerTitle;

- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void).cxx_destruct;

@end
