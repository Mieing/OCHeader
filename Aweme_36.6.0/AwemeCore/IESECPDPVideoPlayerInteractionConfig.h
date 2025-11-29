@class NSString, UIImage;

@interface IESECPDPVideoPlayerInteractionConfig : NSObject

@property (nonatomic) BOOL hideProgressSlider;
@property (nonatomic) BOOL hideVolumeIcon;
@property (nonatomic) BOOL hidePlayButton;
@property (copy, nonatomic) NSString *speakerImage;
@property (copy, nonatomic) NSString *muteSpeakerImage;
@property (nonatomic) double speakerBottomOffset;
@property (copy, nonatomic) NSString *speakerBackgroundColor;
@property (nonatomic) double playerUserContainerHeight;
@property (copy, nonatomic) NSString *coverImageURL;
@property (retain, nonatomic) UIImage *placeholderImage;

+ (id)interactionConfigWithOldPlayerConfig:(id)a0;

- (void).cxx_destruct;

@end
