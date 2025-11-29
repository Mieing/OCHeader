@interface AWENearbyCardFeedSectionController : AWECommonFeedBaseSectionController

@property (nonatomic) BOOL canNotAutoPlay;

- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (void)sectionDidEndDisplayingCell:(id)a0 index:(long long)a1;
- (id)cellIdentifierForModel:(id)a0 index:(long long)a1;
- (BOOL)shouldNotActive;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;

@end
