@class NSArray, AWEAwemeModel;

@interface AWEMultiContentImpl.VideoContentSectionViewModel : BDMultiContentContainer.BaseContentSectionViewModel <AFDRichContentBaseSectionViewModelProtocol, AWERichContentAdapterBasic.RichContentProgressDraggable> {
    void /* unknown type, empty encoding */ cellHasPreparedForPlaying;
    void /* unknown type, empty encoding */ pendingPrepareForDisplay;
    void /* unknown type, empty encoding */ modernTransitionContext;
    void /* unknown type, empty encoding */ shouldInheritSpeed;
}

@property (nonatomic, readonly) NSArray *previewImages;
@property (nonatomic) BOOL isPinching;
@property (nonatomic, readonly) AWEAwemeModel *aweme;

- (double)totalPlayDuration:(BOOL)a0;
- (void)playOrPauseTimer:(BOOL)a0;
- (void)setAlbumPlayStatePlay;
- (void).cxx_destruct;

@end
