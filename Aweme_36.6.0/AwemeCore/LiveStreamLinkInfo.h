@class NSString;

@interface LiveStreamLinkInfo : NSObject

@property (nonatomic) int flags;
@property (copy, nonatomic) NSString *uid;
@property (nonatomic) long long fps;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) long long zOrder;
@property (nonatomic) unsigned long long videoMode;
@property (nonatomic, getter=isMirrored) BOOL mirrored;
@property (nonatomic) double volume;
@property (nonatomic) int channelsPerFrame;
@property (nonatomic) int bytesPerFrame;
@property (nonatomic) int bitsPerChannel;
@property (nonatomic) int sampleRate;

- (void).cxx_destruct;
- (id)init;

@end
