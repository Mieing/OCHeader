@class NSString, MASConstraint;

@interface AWEPadMixVideoPanelAdapter : NSObject <AWEPadMixVideoPanelAdapter>

@property (retain, nonatomic) MASConstraint *containerRightOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;
+ (Class)aAWEPadSplitScreenAdapterClass;
+ (double)getMixPanelHeight;
+ (BOOL)Enable;

- (id)aAWEPadSplitScreenAdapter;
- (void)performViewDidLoad;
- (BOOL)isMixVideoSplitStyle;
- (void)performViewDidLayout;
- (void)performViewNeedLayout;
- (BOOL)panGestureShouldBegin:(id)a0;
- (BOOL)ifPadPanelNeedAdapt;
- (long long)scrollToLocatedCellPosition;
- (BOOL)updateMixVideoCurrentEpisode;
- (BOOL)notClosePanelWhenShareClicked;
- (BOOL)closeSplitPanelWhenDidSelectedWithIsSameEpisode:(BOOL)a0;
- (BOOL)isCurrentLandscape;
- (BOOL)ifNeedAdapt;
- (void)defaultStyleNeedLayout;
- (void)multiScreenStyleLayout;
- (void).cxx_destruct;
- (void)handlePanGesture:(id)a0;
- (id)weakTarget;

@end
