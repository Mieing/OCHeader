@class AUCDTOBasicAlbumSelectControlMediaSource;

@interface AUCDTOBasicAlbumSelectControl : MTLModel

@property (nonatomic) long long minCount;
@property (nonatomic) long long maxCount;
@property (nonatomic) long long minVideoCount;
@property (nonatomic) long long maxVideoCount;
@property (nonatomic) long long minPhotoCount;
@property (nonatomic) long long maxPhotoCount;
@property (nonatomic) double minVideoDuration;
@property (nonatomic) double maxVideoDuration;
@property (retain, nonatomic) AUCDTOBasicAlbumSelectControlMediaSource *mediaSource;

- (void).cxx_destruct;
- (id)init;

@end
