@protocol AWEYAPChannelGuideViewProtocol;

@interface AWEYAPChannelGuideManager : NSObject

@property (weak, nonatomic) id<AWEYAPChannelGuideViewProtocol> guide;

- (void)closeWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
