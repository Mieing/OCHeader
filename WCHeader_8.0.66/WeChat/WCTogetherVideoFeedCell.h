@class NSString, WCSNSNodeVideoView;

@interface WCTogetherVideoFeedCell : WCTogetherBaseFeedCell <WCSNSNodeVideoViewDelegate>

@property (retain, nonatomic) WCSNSNodeVideoView *videoView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;
+ (double)heightForItemContentViewWithViewItem:(id)a0 inTableView:(id)a1;

- (id)observingKeyPathsForViewModel;
- (void)updateValueForKeyPath:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)loadItemContentView;
- (void)layoutItemContentView;
- (void)willMoveToSuperview:(id)a0;
- (void)resetPlayingWithViewItem:(id)a0;
- (void)startPlaying;
- (void)stopPlaying;
- (void)onClickWCSight:(id)a0;
- (void)onWillFullPlay:(BOOL *)a0 sightView:(id)a1;
- (void).cxx_destruct;

@end
