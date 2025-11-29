@class NSData;

@interface BDByteCastMirrorVideoData : NSObject

@property (retain, nonatomic) NSData *data;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) int rotation;
@property (nonatomic) long long videoFormat;
@property (nonatomic) long long pts;
@property (nonatomic) BOOL isKeyFrame;

- (void).cxx_destruct;

@end
