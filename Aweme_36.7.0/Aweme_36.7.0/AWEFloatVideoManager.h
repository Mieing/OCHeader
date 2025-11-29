@class NSMapTable, NSString, AWEAwemeModel, UIView, UIPanGestureRecognizer;
@protocol IESVideoPlayerProtocol;

@interface AWEFloatVideoManager : NSObject <IESVideoPlayerDelegate, AWEFloatVideoManager>

@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (weak, nonatomic) id<IESVideoPlayerProtocol> currentPlayer;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (copy, nonatomic) id /* block */ currentCloseBlock;
@property (nonatomic) BOOL floatVideoShowing;
@property (retain, nonatomic) NSMapTable *playerDatas;
@property (nonatomic) struct CGPoint { double x; double y; } lastCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mainAppWindow;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculatFrameByShowType:(long long)a0;
+ (id)sharedManager;

- (void)closeBtnClicked:(id)a0;
- (id)getVideoLength;
- (void)showFloatVideoWithCreativeID:(id)a0 isFirst:(BOOL)a1;
- (void)hideFloatVideo;
- (void)addFloatVideoData:(id)a0;
- (void)playerWillLoopPlaying:(id)a0;
- (void).cxx_destruct;
- (void)pause:(id)a0;
- (void)pan:(id)a0;
- (void)play:(id)a0;

@end
