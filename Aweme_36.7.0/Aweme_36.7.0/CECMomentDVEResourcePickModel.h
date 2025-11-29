@class NSString, AVURLAsset, UIImage, NSURL;

@interface CECMomentDVEResourcePickModel : NSObject <DVEResourcePickerModel>

@property (retain, nonatomic) AVURLAsset *videoAsset;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSURL *URL;
@property (nonatomic) long long type;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } imageDuration;
@property (nonatomic) double volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
