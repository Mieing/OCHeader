@class MMMusicVideoImageDownloader;
@protocol MMMusicFavHandlerDataSource, MMMusicFavHandlerDelegate;

@interface MMMusicFavHandler : MMObject

@property (retain, nonatomic) MMMusicVideoImageDownloader *imageDownLoader;
@property (weak, nonatomic) id<MMMusicFavHandlerDataSource> dataSource;
@property (weak, nonatomic) id<MMMusicFavHandlerDelegate> delegate;
@property (nonatomic) BOOL isFromShake;

- (void)addToFavouritesWithMusicInfo:(id)a0 mvModel:(id)a1 favSourceType:(int)a2;
- (id)genLogMusicInfo:(id)a0;
- (void).cxx_destruct;

@end
