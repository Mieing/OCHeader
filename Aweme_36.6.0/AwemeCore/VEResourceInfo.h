@class NSURL, IESMMVideoDataClipRange;

@interface VEResourceInfo : NSObject

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) IESMMVideoDataClipRange *clipTimeInfo;
@property (nonatomic) BOOL isImage;
@property (nonatomic) BOOL hasAudio;

- (void).cxx_destruct;

@end
