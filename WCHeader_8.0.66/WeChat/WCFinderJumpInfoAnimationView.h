@class FinderJumpInfo_Style, NSString, WCFinderNetPagView, UILabel, WCFinderJumpInfo;
@protocol WCFinderJumpInfoAnimationViewDelegate;

@interface WCFinderJumpInfoAnimationView : UIView <WCFinderNetPagViewDelegate, WCFinderJumpInfoViewProtocol>

@property (retain, nonatomic) WCFinderJumpInfo *jumpInfo;
@property (retain, nonatomic) FinderJumpInfo_Style *style;
@property (nonatomic) int showPosition;
@property (retain, nonatomic) WCFinderNetPagView *pagView;
@property (retain, nonatomic) UILabel *wordingLabel;
@property (weak, nonatomic) id<WCFinderJumpInfoAnimationViewDelegate> delegate;
@property (nonatomic) double maxWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setMaxWidth:(double)a0 maxTextAreaWidth:(double)a1;
- (void)updateWithJumpInfo:(id)a0 showPosition:(int)a1;
- (void)updateWithJumpInfo:(id)a0 showPosition:(int)a1 playPos:(double)a2;
- (void)onVideoPlayStateChanged:(BOOL)a0;
- (void)changeToShow:(BOOL)a0;
- (void)onVideoUpdatePosition:(double)a0 videoDuration:(double)a1 maxPlayVideoTime:(double)a2;
- (double)animationStartProgress:(double)a0;
- (void)layoutUI;
- (void)updatePagWithPath:(id)a0;
- (void)onFinderPagViewDidLoad:(BOOL)a0 path:(id)a1;
- (void).cxx_destruct;

@end
