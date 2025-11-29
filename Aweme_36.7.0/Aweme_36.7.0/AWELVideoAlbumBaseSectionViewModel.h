@class NSArray, NSDictionary;

@interface AWELVideoAlbumBaseSectionViewModel : AWEBaseListSectionViewModel

@property (copy, nonatomic) NSArray *albumList;
@property (copy, nonatomic) NSDictionary *logPassback;

- (void)fetchSectionData;
- (BOOL)needShowHotSection;
- (void).cxx_destruct;

@end
