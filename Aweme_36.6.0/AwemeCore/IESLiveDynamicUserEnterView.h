@class UIView, IESLiveVideoGiftController, IESLiveFlexBackgroundImageView, NSString, UIImageView, IESLiveRichTextLabel, IESLiveAnimatedImageView, NSMutableArray, IESLiveBadgeImageView;
@protocol IESLiveWebPDecoder, IESLiveWebPPlayer;

@interface IESLiveDynamicUserEnterView : IESLivePrivilegeEntryView <CAAnimationDelegate, IESLiveAnimatedImageEffectResourceDelegate, IESLiveVideoGiftControllerDelegate>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originFrame;
@property (retain, nonatomic) UIView *enterLineContainer;
@property (retain, nonatomic) IESLiveAnimatedImageView *tailImageView;
@property (retain, nonatomic) UIView *effectContainer;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *webpPlayerView;
@property (retain, nonatomic) IESLiveAnimatedImageView *centerAnimatedView;
@property (retain, nonatomic) IESLiveAnimatedImageView *followedAnimatedView;
@property (retain, nonatomic) IESLiveFlexBackgroundImageView *enterView;
@property (retain, nonatomic) IESLiveBadgeImageView *levelImageView;
@property (retain, nonatomic) IESLiveAnimatedImageView *overLayAnimatedView;
@property (retain, nonatomic) IESLiveRichTextLabel *richTextLabel;
@property (nonatomic) BOOL hasLevel;
@property (nonatomic) BOOL hasSweepLight;
@property (retain, nonatomic) IESLiveVideoGiftController *giftController;
@property (retain, nonatomic) NSMutableArray *whiteShadowArray;
@property (nonatomic) double stayTime;
@property (nonatomic) BOOL mp4WillPlayFirstFrame;
@property (nonatomic) BOOL shouldPlayMp4;
@property (nonatomic) BOOL reduceUserEnterRoomAnimationFPS;
@property (retain, nonatomic) id<IESLiveWebPDecoder> webPDecoder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)didFinishPlayingWithError:(id)a0;
- (void)videoGiftController:(id)a0 willPlayFrame:(id)a1;
- (void)videoGiftController:(id)a0 isReadyToPlayOnView:(id)a1;
- (void)startShowingAnimationOn:(id)a0 shouldReduceFPS:(BOOL)a1 stayTime:(double)a2;
- (void)updateWithEnterMessageNode:(id)a0;
- (void)touchViewDidTap;
- (id)animatedImageView:(id)a0 webPDecoderWithEffectID:(unsigned long long)a1;
- (id)createWhiteShadow;
- (void)addWhiteShadowAnimation:(id)a0 duration:(double)a1 delay:(double)a2;
- (void)startWhiteShadowAnimation;
- (void)closeMp4Player;
- (BOOL)isEmptyFlexArray:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 reduceUserEnterRoomAnimationFPS:(BOOL)a1;
- (void)startAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutUI;

@end
