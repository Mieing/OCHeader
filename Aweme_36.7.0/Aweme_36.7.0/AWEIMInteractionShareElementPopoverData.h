@class NSArray, UIImageView, AWEAwemeModel, NSDictionary, NSString, AWEShareContext;
@protocol AWEIMShareAndForwardToChatProtocol;

@interface AWEIMInteractionShareElementPopoverData : NSObject <CAAnimationDelegate, AWEInteractionElementPopoverDataProtocol, AWEIMInteractionShareElementDataProtocol>

@property (retain, nonatomic) UIImageView *animationAvatarView;
@property (retain, nonatomic) id<AWEIMShareAndForwardToChatProtocol> shareImpl;
@property (retain, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) AWEShareContext *shareContext;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSDictionary *contextDict;
@property (copy, nonatomic) id /* block */ recoverAnimationViewBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)elementContentView;
- (void)configContentView:(id)a0 atIndex:(long long)a1;
- (void)loadDataIfNeeded:(id /* block */)a0 releaseBlock:(id /* block */)a1;
- (void)configContentCustomView:(id)a0 atIndex:(long long)a1;
- (id)elementCustomContentView;
- (double)dataItemSpace;
- (struct CGSize { double x0; double x1; })dataItemSize;
- (void)eventOccurAtIndex:(long long)a0 target:(id)a1 sourceView:(id)a2 containerView:(id)a3 eventType:(unsigned long long)a4 completion:(id /* block */)a5;
- (void)fetchShareModelWithCompletion:(id /* block */)a0 releaseBlock:(id /* block */)a1;
- (void)p_onShareActionWithIndex:(id)a0 eventType:(unsigned long long)a1;
- (id)createAnimationPathWithBeforePoint:(struct CGPoint { double x0; double x1; })a0 afterPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)p_setupShareStatusWithEventType:(unsigned long long)a0;
- (void)p_shareButtonTrackService:(id)a0 chatType:(id)a1;
- (void)p_shareToUserWithViewModel:(id)a0 aweme:(id)a1 shareList:(id)a2;
- (void)p_avatorAnimatedWithIndex:(id)a0 target:(id)a1 sourceView:(id)a2 containerView:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)init;
- (long long)dataCount;

@end
