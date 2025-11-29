@class NSString;

@interface WCFinderVideoBasisModel : NSObject

@property (copy, nonatomic) NSString *videoFormat;
@property (nonatomic) BOOL isHDR;
@property (nonatomic) unsigned int videoCodecType;
@property (nonatomic) struct CGSize { double width; double height; } videoResolution;
@property (nonatomic) unsigned long long bitrate;
@property (nonatomic) unsigned long long frameRate;
@property (nonatomic) unsigned long long audioTrackNum;
@property (nonatomic) double videoFileSize;

- (void).cxx_destruct;

@end
