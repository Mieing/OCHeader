@class NSString, UIView;
@protocol AWEFeedLiveMarkViewProtocol;

@interface IESGCPLiveAnimationService_Douyin : NSObject <IESGCPLiveAnimationService>

@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView;
@property (retain, nonatomic) UIView *liveAvatarView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopAnimationWithView:(id)a0;
- (void)setMarkLayerGradientColorWithType:(unsigned long long)a0;
- (void)startAnimationWithView:(id)a0 showLiveTag:(BOOL)a1 withURLs:(id)a2 type:(unsigned long long)a3 interval:(double)a4;
- (void)hiddenLiveAvatarView;
- (void)showLiveAvatarView;
- (id)getLiveAvatarView;
- (id)getLiveMarkViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupView;

@end
