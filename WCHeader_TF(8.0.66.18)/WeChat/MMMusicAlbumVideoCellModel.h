@class NSString, MMAsset;

@interface MMMusicAlbumVideoCellModel : MMObject

@property (retain, nonatomic) NSString *uniqueId;
@property (retain, nonatomic) MMAsset *asset;
@property (nonatomic) double duration;
@property (nonatomic) int pos;
@property (retain, nonatomic) NSString *localPath;

- (void)asyncGetDuration:(id /* block */)a0;
- (void)asyncGetLocalPath:(id /* block */)a0;
- (BOOL)isValidLocalVideoForPost;
- (BOOL)canSelectVideoWithMinDuration:(double)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToMMMusicAlbumVideoCellModel:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
