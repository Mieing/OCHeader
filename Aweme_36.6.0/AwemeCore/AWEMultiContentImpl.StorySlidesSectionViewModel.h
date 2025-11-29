@class NSArray, AWEAwemeModel;

@interface AWEMultiContentImpl.StorySlidesSectionViewModel : BDMultiContentContainer.BaseContentSectionViewModel <AFDRichContentBaseSectionViewModelProtocol, AWERichContentAdapterBasic.RichContentProgressDraggable> {
    void /* unknown type, empty encoding */ cellHasPreparedForPlaying;
    void /* unknown type, empty encoding */ pendingPrepareForDisplay;
    void /* unknown type, empty encoding */ isPanning;
    void /* unknown type, empty encoding */ modernTransitionContext;
    void /* unknown type, empty encoding */ shouldInheritSpeed;
    void /* unknown type, empty encoding */ lastReportAwemeID;
}

@property (nonatomic, readonly) NSArray *previewImages;
@property (nonatomic) BOOL isPinching;
@property (nonatomic, readonly) AWEAwemeModel *aweme;
@property (nonatomic, readonly) long long itemCount;

- (double)totalPlayDuration:(BOOL)a0;
- (void)playOrPauseTimer:(BOOL)a0;
- (void)setAlbumPlayStatePlay;
- (void).cxx_destruct;

@end
