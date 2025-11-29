@protocol AWEInTodayAlbumModelProtocol;

@interface AWECKAAAssetResponseModel : NSObject

@property (retain, nonatomic) id<AWEInTodayAlbumModelProtocol> album;
@property (nonatomic) long long offset;
@property (nonatomic) BOOL hasMore;

- (void).cxx_destruct;

@end
