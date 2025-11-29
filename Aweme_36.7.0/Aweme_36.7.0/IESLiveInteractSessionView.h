@class UIView;

@interface IESLiveInteractSessionView : NSObject

@property (retain, nonatomic) UIView *rtcView;
@property (retain, nonatomic) UIView *videoView;
@property (retain, nonatomic) UIView *optionView;
@property (nonatomic) BOOL isHost;

- (void).cxx_destruct;

@end
