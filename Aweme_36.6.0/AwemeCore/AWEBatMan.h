@class AWEBatManEventTracker, NSString, AWEAwemeModel, AWEBatManCustomTransition;
@protocol AWEBatManLoadStatusDelegate, XPlayItemProtocol, XPLayQualityStats, NSCopying;

@interface AWEBatMan : NSObject <XPlayItemDelegate, AWEBatManProtocol>

@property (nonatomic) unsigned long long enterType;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL hasCustomUI;
@property (retain, nonatomic) id<XPLayQualityStats, NSCopying> playStats;
@property (retain, nonatomic) AWEBatManCustomTransition *transition;
@property (nonatomic) unsigned long long originOrientation;
@property (nonatomic) long long countTimes;
@property (retain, nonatomic) AWEBatManEventTracker *tracker;
@property (nonatomic) BOOL isFirstTapBatManView;
@property (retain, nonatomic) id<XPlayItemProtocol> playItem;
@property (nonatomic) unsigned long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEBatManLoadStatusDelegate> delegate;
@property (retain, nonatomic) AWEAwemeModel *model;

+ (void)hookShouldAutorotateWithViewController:(id)a0;

- (void)playItem:(id)a0 preloadDidFailed:(id)a1;
- (void)playItem:(id)a0 preloadDidSucceed:(id)a1;
- (void)playItem:(id)a0 playStatusDidUpdated:(unsigned long long)a1 info:(id)a2;
- (void)playItem:(id)a0 playQualityStats:(id)a1;
- (void)playItem:(id)a0 playTimeCountDown:(unsigned long long)a1;
- (void)playItemViewTouchBegan:(id)a0;
- (void)stopPlay;
- (void)preloadWithXToken:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)preloadWithBatManID:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setupItemViewWithModel:(id)a0;
- (void)beginPlayinViewController:(id)a0 withCustomUIBlock:(id /* block */)a1;
- (void)closePlayController;
- (void)preloadWithBatManID:(id)a0 handler:(id /* block */)a1;
- (BOOL)isFirstTimePlayForBatManID:(id)a0;
- (int)batManOrientation;
- (void)setFirstTimePlayForBatManID:(id)a0;
- (id)batManCustomTransition;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)presentViewController:(id)a0;

@end
