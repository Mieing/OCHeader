@protocol IESLivePlayerController;

@interface AWELiveAudienceAccessServicePlayerConfig : NSObject

@property (retain, nonatomic) id<IESLivePlayerController> player;
@property (nonatomic) BOOL prePullStreamDequeue;

- (void).cxx_destruct;

@end
