@interface AWEPlaylistDetailViewModel : NSObject

@property (nonatomic) BOOL isRequesting;
@property (readonly, nonatomic) double headerHeight;
@property (readonly, nonatomic) double musicHeaderHeight;
@property (readonly, nonatomic) double musicCellHeight;
@property (readonly, nonatomic) BOOL networkReachable;

+ (id)storage;

@end
