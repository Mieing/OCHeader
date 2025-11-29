@class UIColor, NSString, NSDictionary, AWEAwemeModel;

@interface AWESearchBaseImagePlayerModel : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) struct CGSize { double width; double height; } imagePlayerSize;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) BOOL slideEnable;
@property (nonatomic) BOOL repeat;
@property (nonatomic) long long scaleMode;
@property (nonatomic) long long coverContentMode;
@property (nonatomic) BOOL mute;
@property (nonatomic) unsigned long long playMode;
@property (nonatomic) BOOL syncPlayStatus;
@property (nonatomic) double volume;
@property (nonatomic) double playbackRate;
@property (nonatomic) long long initalIndex;
@property (nonatomic) long long playState;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSDictionary *btmInfo;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL useGrayPlaceholderImage;
@property (nonatomic) BOOL isPlayClipMode;
@property (nonatomic) double startPlayTime;
@property (nonatomic) double clipDuration;
@property (copy, nonatomic) id /* block */ didVideoClipPlaycompletion;

- (void).cxx_destruct;
- (id)init;

@end
