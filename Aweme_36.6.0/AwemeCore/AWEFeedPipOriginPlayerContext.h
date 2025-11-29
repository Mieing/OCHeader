@class NSString, AWEAwemeModel, UIView, UIViewController;
@protocol AWEPlayVideoViewControllerProtocol;

@interface AWEFeedPipOriginPlayerContext : NSObject <AWEFeedPipOriginPlayerContext>

@property (nonatomic) long long index;
@property (retain, nonatomic) UIView *playerView;
@property (retain, nonatomic) UIView *placeholderView;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) UIViewController<AWEPlayVideoViewControllerProtocol> *videoController;
@property (nonatomic) float playbackRate;
@property (retain, nonatomic) id userInfo;
@property (copy, nonatomic) id /* block */ bindPlayerViewBlock;
@property (copy, nonatomic) id /* block */ unbindPlayerViewBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
