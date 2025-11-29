@class NSString, UIImage, UIColor;

@interface MMFinderLiveAudioRoomBackgroundImageInfo : NSObject <NSCopying>

@property (retain, nonatomic) NSString *originalUrlString;
@property (nonatomic) unsigned long long backgroundImageState;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) UIColor *audioWaveColor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
