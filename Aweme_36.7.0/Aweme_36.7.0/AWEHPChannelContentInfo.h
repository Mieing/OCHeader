@class AWEAwemeModel;

@interface AWEHPChannelContentInfo : NSObject

@property (nonatomic) double currentPlayingTime;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (nonatomic) BOOL canShowIntroductionAlert;
@property (nonatomic) BOOL isSplashFirstDisappear;

- (void).cxx_destruct;

@end
