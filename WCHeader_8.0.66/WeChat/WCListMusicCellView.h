@class NSString, UIView, NSMutableArray, MMMusicPlayerContoller;

@interface WCListMusicCellView : WCListBaseCellView <MMMusicPlayerContollerDelegate> {
    UIView *m_tailView;
    NSMutableArray *_arrKVOImageView;
    MMMusicPlayerContoller *_playButton;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)calculateHeightWithGroup:(id)a0 groupItem:(id)a1 width:(double)a2 isFirstOneInsection:(BOOL)a3 isLastOneInSection:(BOOL)a4;
+ (id)musicTitleWithDataItem:(id)a0;
+ (id)trimSingerNameWithDataItem:(id)a0;

- (double)maxLabelWidth;
- (double)tailViewHeight;
- (void)dealloc;
- (void)initTailView;
- (void)initView;
- (id)musicTitle;
- (id)trimSingerName;
- (void)onClickEvent;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)onClickToPlayMusic:(id)a0 playState:(long long)a1 clickedOnBtn:(BOOL)a2;
- (void)updateAccessibility;
- (id)customAccessibilityComponents;
- (void).cxx_destruct;

@end
