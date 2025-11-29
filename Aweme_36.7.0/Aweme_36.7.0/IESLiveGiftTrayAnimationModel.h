@class HTSLiveText, NSString, NSDictionary, HTSLiveImage;

@interface IESLiveGiftTrayAnimationModel : NSObject

@property (retain, nonatomic) HTSLiveImage *preEffectImg;
@property (nonatomic) long long trayStartTime;
@property (retain, nonatomic) HTSLiveImage *trayRipple;
@property (retain, nonatomic) HTSLiveImage *postEffectImg;
@property (copy, nonatomic) NSString *preSchema;
@property (copy, nonatomic) NSString *postSchema;
@property (nonatomic) long long preDuration;
@property (nonatomic) long long postDuration;
@property (nonatomic) long long preEffectSource;
@property (nonatomic) long long postEffectSource;
@property (copy, nonatomic) NSDictionary *postEventTracking;
@property (retain, nonatomic) HTSLiveText *postSubTitle;

- (void)updateWithTrayInfo:(id)a0;
- (BOOL)hasPreAnimatedImage;
- (BOOL)hasPostAnimatedImage;
- (void).cxx_destruct;

@end
