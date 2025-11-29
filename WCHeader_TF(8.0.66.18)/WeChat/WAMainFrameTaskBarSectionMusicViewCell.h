@class MMMusicInfo, MMImageView;

@interface WAMainFrameTaskBarSectionMusicViewCell : WAMainFrameTaskBarSectionOtherViewCell {
    MMImageView *_playIcon;
    MMMusicInfo *_curMusicInfo;
}

- (void)dealloc;
- (void)initView;
- (void)layoutSubviews;
- (BOOL)supportAddToMinimize;
- (id)defaultImage;
- (void)updateWithListInfo:(id)a0;
- (id)getCurLeftImage;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)onClickToPlayMusic:(id)a0 playState:(long long)a1 clickedOnBtn:(BOOL)a2;
- (void).cxx_destruct;

@end
