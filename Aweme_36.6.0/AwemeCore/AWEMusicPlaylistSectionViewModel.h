@class NSString, NSArray;

@interface AWEMusicPlaylistSectionViewModel : NSObject

@property (copy, nonatomic) NSString *sectionTitle;
@property (nonatomic) BOOL showCreateBtn;
@property (nonatomic) double sectionHeaderHeight;
@property (retain, nonatomic) NSArray *cellViewModelArray;

- (void).cxx_destruct;

@end
