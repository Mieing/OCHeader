@class NSString;

@interface IESLiveScreencastLinkAvatarViewConfig : NSObject

@property (nonatomic) double avatarSideLength;
@property (nonatomic) long long silenceViewStyle;
@property (copy, nonatomic) NSString *silenceViewName;
@property (nonatomic) double animationWidthOriginal;
@property (nonatomic) double animationHeightOriginal;
@property (nonatomic) double animationWidthNormal;
@property (nonatomic) double animationHeightNormal;
@property (nonatomic) double animationWidthGenderDiff;
@property (nonatomic) double animationHeightGenderDiff;
@property (copy, nonatomic) NSString *startTalkingViewName;
@property (copy, nonatomic) NSString *loopTalkingViewName;

+ (id)screencastLinkConfig;

- (void).cxx_destruct;

@end
