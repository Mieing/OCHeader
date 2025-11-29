@class NSString, FinderLiveGetMusicTabListResponse;

@interface MMFinderLiveAddMusicListItem : NSObject

@property (copy, nonatomic) FinderLiveGetMusicTabListResponse *response;
@property (nonatomic) unsigned int tabType;
@property (retain, nonatomic) NSString *listName;
@property (nonatomic) BOOL removeOnNil;

- (BOOL)shouldShow;
- (void).cxx_destruct;

@end
