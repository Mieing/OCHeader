@protocol AWEFeedTableViewCellViewControllerProtocol;

@interface AWEDetailCellAlbumIndexData : NSObject

@property (retain, nonatomic) id<AWEFeedTableViewCellViewControllerProtocol> detailCellViewController;
@property (nonatomic) long long toIndex;
@property (nonatomic) BOOL animated;

- (void).cxx_destruct;

@end
