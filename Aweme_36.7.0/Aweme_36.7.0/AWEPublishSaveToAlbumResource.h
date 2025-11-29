@class NSArray;

@interface AWEPublishSaveToAlbumResource : NSObject

@property (retain, nonatomic) NSArray *filePaths;
@property (retain, nonatomic) NSArray *indexes;
@property (nonatomic) double livePhotoCoverImagePositions;
@property (nonatomic) BOOL isImages;
@property (nonatomic) BOOL isLivePhoto;

- (void).cxx_destruct;
- (id)description;

@end
