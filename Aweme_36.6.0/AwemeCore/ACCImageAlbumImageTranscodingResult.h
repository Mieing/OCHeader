@class NSData;

@interface ACCImageAlbumImageTranscodingResult : NSObject

@property (retain, nonatomic) NSData *imageData;
@property (nonatomic) double compressionQuality;
@property (nonatomic) double encodeLength;
@property (nonatomic) double recodeLength;
@property (nonatomic) BOOL didRecode;
@property (nonatomic) double encodeDuration;
@property (nonatomic) double recodeDuration;

- (void).cxx_destruct;

@end
