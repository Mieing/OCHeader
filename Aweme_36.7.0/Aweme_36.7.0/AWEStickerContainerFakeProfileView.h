@class AWEAnimatedMusicCoverButton, NSString, UIView, AWEUserModel;

@interface AWEStickerContainerFakeProfileView : UIView

@property (retain, nonatomic) UIView *bottomContainerView;
@property (retain, nonatomic) UIView *rightContainerView;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) AWEAnimatedMusicCoverButton *musicCoverButton;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long titleLineCount;
@property (nonatomic) BOOL showInPublishPreviewPage;
@property (nonatomic) BOOL firstFrameOpt;

- (id)initWithShowInPublishPreviewPage:(BOOL)a0 title:(id)a1 titleLineCount:(long long)a2;
- (id)initWithShowInPublishPreviewPage:(BOOL)a0 title:(id)a1;
- (void)updateMusicCoverWithMusicModel:(id)a0;
- (double)bottomContainerTopMargin;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
