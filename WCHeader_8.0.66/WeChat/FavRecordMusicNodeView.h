@class UIImage, NSString, MMMusicPlayerContoller;

@interface FavRecordMusicNodeView : FavRecordLeftThumbRightLabelNodeView <MMWebImageViewDelegate, MMMusicPlayerContollerDelegate> {
    MMMusicPlayerContoller *m_musicPlayButton;
}

@property (retain, nonatomic) UIImage *mvThumbImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addContentSubView;
- (void)addMusicThumbView;
- (void)onTouchDown;
- (void)onTouchUpInside;
- (void)addMusicPlayButton;
- (void)updateNodeWithTimePrefix:(int)a0 headHidden:(BOOL)a1 bottomLineHidden:(BOOL)a2;
- (void)setPlayerSource:(long long)a0;
- (void)updateMinimizeThumbImage:(id)a0;
- (void)onLoadImageOK:(id)a0;
- (void)onClickToPlayMusic:(id)a0 playState:(long long)a1 clickedOnBtn:(BOOL)a2;
- (void).cxx_destruct;

@end
