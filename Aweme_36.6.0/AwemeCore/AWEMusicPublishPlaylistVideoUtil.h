@class NSDictionary, UIViewController;

@interface AWEMusicPublishPlaylistVideoUtil : NSObject

@property (retain, nonatomic) NSDictionary *trackParams;
@property (weak, nonatomic) UIViewController *containerVC;

+ (id)publisPlaylistAnchorModelWithPlaylistInfo:(id)a0;

- (id)createPlaylistTipViewWithContainer:(id)a0 trackParams:(id)a1;
- (void)didClickTipMore;
- (void).cxx_destruct;

@end
