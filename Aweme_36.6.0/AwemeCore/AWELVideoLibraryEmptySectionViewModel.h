@class AWELVideoLibraryPageContext;

@interface AWELVideoLibraryEmptySectionViewModel : AWEBaseListSectionViewModel

@property (retain, nonatomic) AWELVideoLibraryPageContext *context;
@property (nonatomic) long long errorType;

- (void)fetchSectionData;
- (void).cxx_destruct;

@end
