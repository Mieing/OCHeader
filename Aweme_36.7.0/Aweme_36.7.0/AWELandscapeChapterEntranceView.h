@class AWEAwemeModel, DUXBaseImageView, NSArray, AWERelatedVideoPlayingAnimationView, UIView, UITapGestureRecognizer, NSString, UILabel;
@protocol AWELandscapeChapterEntranceDelegate;

@interface AWELandscapeChapterEntranceView : UIView <AWELandscapeChapterEntranceViewProtocol>

@property (retain, nonatomic) AWERelatedVideoPlayingAnimationView *playingAnimationView;
@property (retain, nonatomic) UIView *pointView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIView *lineViewBeforeNextChapter;
@property (retain, nonatomic) UILabel *nextChapterLabel;
@property (retain, nonatomic) UITapGestureRecognizer *nextChapterTapGesture;
@property (retain, nonatomic) DUXBaseImageView *arrowIcon;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) long long entranceType;
@property (nonatomic) BOOL isLock;
@property (readonly, copy, nonatomic) NSArray *chapterList;
@property (weak, nonatomic) id<AWELandscapeChapterEntranceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onNextChapterLabelClicked:(id)a0;
- (void)updateWithCurrentTime:(double)a0;
- (void)updateLockStatus:(BOOL)a0;
- (void)trackShowChapterEntranceWithState:(long long)a0 context:(id)a1;
- (void)trackShowChapterEntranceOverWithContext:(id)a0;
- (void)trackClickChapterEntranceWithState:(long long)a0 context:(id)a1 isClickNext:(BOOL)a2 extraParams:(id)a3;
- (BOOL)enableNextChapter;
- (id)initWithEntranceType:(long long)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)handleClickChapterEntrance:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
