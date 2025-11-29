@class WCLiveBlurButton, MMMusicLiveVCTopBarMusicSourceButton, UIImageView, MusicSourceViewInfo, MusicAudioTypeButton, MMUILabel, MMUIButton, MusicLiveGetSongStatusResp_MusicianInfo;
@protocol MMMusicLiveVCTopBarViewDelegate;

@interface MMMusicLiveVCTopBarView : UIView

@property (retain, nonatomic) UIImageView *backView;
@property (retain, nonatomic) WCLiveBlurButton *closeButton;
@property (retain, nonatomic) MMUILabel *titleView;
@property (retain, nonatomic) MMUIButton *musicianView;
@property (retain, nonatomic) MMMusicLiveVCTopBarMusicSourceButton *musicSourceButton;
@property (retain, nonatomic) MusicAudioTypeButton *audioTypeButton;
@property (retain, nonatomic) MusicSourceViewInfo *musicSourceViewInfo;
@property (retain, nonatomic) MusicLiveGetSongStatusResp_MusicianInfo *musician;
@property (nonatomic) double titleMaxWidth;
@property (weak, nonatomic) id<MMMusicLiveVCTopBarViewDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (id)iconImageFromDelegate;
- (id)appNameFromDelegate;
- (void)reloadData;
- (void)setupSourceViewInfo;
- (void)layoutSubviews;
- (BOOL)canJumpMusician;
- (void)customLayout;
- (void)layoutSubviewsIfClear:(BOOL)a0;
- (void)setTitleText:(id)a0 singer:(id)a1;
- (void)onClickAudioTypeButton;
- (void)onSourceViewBtnClicked:(id)a0;
- (void)onClickCloseBtn;
- (void)onClickMusician;
- (void).cxx_destruct;

@end
