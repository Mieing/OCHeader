@class AWESearchListView, UIView, NSString, AWESearchMusicRecommendedVideosModel, AWEListDataController, AWESearchMusicRecommendVideoPlayerContainer, NSMutableDictionary, AWESearchMusicRecommendedVideoView, UILabel;

@interface AWESearchMusicRecommendedVideoListView : UIView <AWESearchListViewDelegate, AWESearchListViewDataSource, AWESearchMusicRecommendedVideoViewDelegate, AWESearchMusicRecommendedVideoListViewProtocol>

@property (retain, nonatomic) UIView *topSeparatorLine;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWESearchListView *listView;
@property (retain, nonatomic) UIView *separatorLine;
@property (weak, nonatomic) AWESearchMusicRecommendedVideoView *playingView;
@property (retain, nonatomic) AWESearchMusicRecommendVideoPlayerContainer *playerContainer;
@property (nonatomic) long long playingVideoIndex;
@property (nonatomic) long long playViewWithUseMusicButtonIndex;
@property (weak, nonatomic) AWESearchMusicRecommendedVideoView *playViewWithUseMusicButton;
@property (retain, nonatomic) AWESearchMusicRecommendedVideosModel *model;
@property (retain, nonatomic) AWEListDataController *dataController;
@property (copy, nonatomic) id /* block */ playVideoBlock;
@property (copy, nonatomic) id /* block */ pauseVideoBlock;
@property (copy, nonatomic) id /* block */ useMusicBlock;
@property (copy, nonatomic) id /* block */ cardShowBlock;
@property (copy, nonatomic) id /* block */ willGotoDetailPage;
@property (retain, nonatomic) NSMutableDictionary *logExtraDict;
@property (retain, nonatomic) NSString *referString;
@property (nonatomic) BOOL showTopSeparatorLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightWithModel:(id)a0 isFirst:(BOOL)a1;
+ (struct CGSize { double x0; double x1; })sizeWithModel:(id)a0 defaultSize:(struct CGSize { double x0; double x1; })a1;

- (void)updateUITheme:(BOOL)a0;
- (id)identifierWithModel:(id)a0;
- (void)stopVideoPlay;
- (void)clearVideoUseMusicButton;
- (void)updateWithModel:(id)a0 offsetX:(double)a1 lastPlayedIndex:(long long)a2;
- (struct CGPoint { double x0; double x1; })getListContentOffset;
- (void)removePlayerContainer;
- (id)getCollecionViewPanGesture;
- (void)updateWithModel:(id)a0 playContainer:(id)a1 index:(long long)a2 offsetX:(double)a3;
- (void)updateWithModel:(id)a0 offsetX:(double)a1;
- (double)leftMarginForListView:(id)a0;
- (double)rightMarginForListView:(id)a0;
- (struct CGSize { double x0; double x1; })listView:(id)a0 defaultSizeForItemWithModel:(id)a1 atIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })sizeWithModel:(id)a0 defaultSize:(struct CGSize { double x0; double x1; })a1;
- (double)itemSpacingForListView:(id)a0;
- (void)listView:(id)a0 didSelectItemWithModel:(id)a1 atIndex:(long long)a2;
- (void)listView:(id)a0 willDisplayItemWithModel:(id)a1 atIndex:(long long)a2;
- (id)createWithModel:(id)a0 atIndex:(long long)a1;
- (void)updateView:(id)a0 withModel:(id)a1 atIndex:(long long)a2;
- (void)listView:(id)a0 didDequeueReusableView:(id)a1;
- (void)resetPlayingVideoInfo;
- (void)pauseWhenOtherMediaPlayed;
- (void)playVideoByView:(id)a0 withContainer:(id)a1 index:(long long)a2;
- (void)pauseVideoWithContainer:(id)a0 withIndex:(long long)a1;
- (void)useMusicWithModel:(id)a0 withIndex:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addObserver;

@end
