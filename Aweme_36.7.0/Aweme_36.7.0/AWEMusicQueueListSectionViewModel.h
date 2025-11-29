@class NSArray, AWEMusicQueueListSectionHeaderModel;

@interface AWEMusicQueueListSectionViewModel : NSObject

@property (retain, nonatomic) AWEMusicQueueListSectionHeaderModel *headerViewModel;
@property (retain, nonatomic) NSArray *musicList;

- (id)initWithMusicList:(id)a0 headerViewModel:(id)a1;
- (void).cxx_destruct;

@end
