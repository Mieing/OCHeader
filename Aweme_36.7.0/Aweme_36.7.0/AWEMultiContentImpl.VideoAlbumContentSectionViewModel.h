@class NSArray, AWEAwemeModel;

@interface AWEMultiContentImpl.VideoAlbumContentSectionViewModel : BDMultiContentContainer.BaseContentSectionViewModel <AFDRichContentBaseSectionViewModelProtocol, AWERichContentAdapterBasic.RichContentProgressDraggable> {
    void /* unknown type, empty encoding */ modernTransitionContext;
    void /* unknown type, empty encoding */ albumContentShrink;
    void /* unknown type, empty encoding */ cellHasPreparedForPlaying;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cell;
}

@property (nonatomic) BOOL isPinching;
@property (nonatomic, readonly) NSArray *previewImages;
@property (nonatomic, readonly) AWEAwemeModel *aweme;

- (double)totalPlayDuration:(BOOL)a0;
- (void)playOrPauseTimer:(BOOL)a0;
- (void)setAlbumPlayStatePlay;
- (void).cxx_destruct;

@end
