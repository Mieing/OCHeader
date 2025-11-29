@interface ACCImageAlbumExportTrackerModel : NSObject

@property (nonatomic) double reloadDuration;
@property (nonatomic) double renderDuration;
@property (nonatomic) double encodeDuration;
@property (nonatomic) double recodeDuration;
@property (nonatomic) double saveFileDuration;
@property (nonatomic) double originLength;
@property (nonatomic) double encodeLength;
@property (nonatomic) double recodeLength;
@property (nonatomic) double compressionQuality;

- (id)init;

@end
