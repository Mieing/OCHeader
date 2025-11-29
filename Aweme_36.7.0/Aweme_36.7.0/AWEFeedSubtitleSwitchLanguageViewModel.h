@class NSArray, NSIndexPath;

@interface AWEFeedSubtitleSwitchLanguageViewModel : NSObject

@property (copy, nonatomic) NSArray *sectionList;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;

- (id)cellModelWithIndexPath:(id)a0;
- (void)configViewModel;
- (void)updateSelectedIndexPath:(id)a0;
- (void).cxx_destruct;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:(long long)a0;

@end
