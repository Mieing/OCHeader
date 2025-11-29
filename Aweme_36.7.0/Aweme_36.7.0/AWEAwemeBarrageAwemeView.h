@class AWEFeedRelationView, NSString, UIImageView, AWECommentAnchorView, UILabel, UIView;
@protocol AFDAwemeMusicInfoViewProtocol;

@interface AWEAwemeBarrageAwemeView : AWEAwemeBarrageCommentView <AWEAwemeBarrageAwemeViewProtocol>

@property (retain, nonatomic) UIImageView *dislikeImageView;
@property (retain, nonatomic) AWECommentAnchorView *anchorView;
@property (retain, nonatomic) AWEFeedRelationView *relationView;
@property (retain, nonatomic) UILabel *dislikeLabel;
@property (retain, nonatomic) UIView<AFDAwemeMusicInfoViewProtocol> *musicInfoView;
@property (nonatomic) BOOL isPinningStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureUI;
- (void)configureWithFrame:(id)a0;
- (BOOL)shouldResponseEventForDislikeOnLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)shouldResponseEventForMusicOnLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)shouldResponseEventForAnchorOnLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)shouldResponseEventForRelationOnLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)updateStyle;
- (void).cxx_destruct;
- (void)pause;
- (void)prepareForReuse;
- (void)resume;
- (void)playAnimation;

@end
