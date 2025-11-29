@class UIImage, NSString;

@interface MMFinderLiveAudioModeBackgroundConfiguration : NSObject

@property (nonatomic) unsigned int backgroundType;
@property (readonly, nonatomic) BOOL valid;
@property (retain, nonatomic) UIImage *localStaticImage;
@property (retain, nonatomic) NSString *remoteStaticImageUri;
@property (retain, nonatomic) NSString *localAnimatedVideoPath;
@property (retain, nonatomic) NSString *remoteAnimatedVideoUri;
@property (retain, nonatomic) UIImage *localAnimatedFallbackImage;
@property (retain, nonatomic) NSString *remoteAnimatedFallbackImageUri;
@property (readonly, nonatomic) NSString *preferredStaticImageUri;

+ (id)configurationWithLiveRoomImg:(id)a0;

- (BOOL)isEqualToOtherAudioModeBackgroundConfig:(id)a0;
- (id)equivalentLiveRoomImg;
- (void).cxx_destruct;

@end
