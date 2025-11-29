@class UIImage, NSString;

@interface AWEFeedPlayableGameEndedViewModel : NSObject

@property (retain, nonatomic) UIImage *lastFrame;
@property (retain, nonatomic) NSString *gameIconUrl;
@property (retain, nonatomic) NSString *gameName;
@property (retain, nonatomic) NSString *jumpScheme;
@property (nonatomic) BOOL isInnerJump;
@property (nonatomic) BOOL isHardAd;

- (void).cxx_destruct;

@end
