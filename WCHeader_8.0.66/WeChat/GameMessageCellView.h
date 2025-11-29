@class UIImageView, MMTimer, GameMessageViewModel;

@interface GameMessageCellView : CommonMessageCellView {
    unsigned int m_uiCurrImageIndex;
    unsigned int m_uiAnimationTimes;
    UIImageView *m_gameImageView;
    MMTimer *m_gameTimer;
}

@property (readonly, nonatomic) GameMessageViewModel *viewModel;

+ (id)getGameImageByIndex:(unsigned int)a0;

- (void)dealloc;
- (void)prepareForReuse;
- (void)layoutContentView;
- (void)onAppear;
- (void)startGameTimer;
- (void)stopGameTimer;
- (void)handleGameTimer:(id)a0;
- (void)doAnimation;
- (void)stopAnimation;
- (id)operationMenuItems;
- (void).cxx_destruct;

@end
