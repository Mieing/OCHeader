@class UIImageView, NSString, WCFinderFeedDetailStatusView;
@protocol TextStateBaseMediaViewDelegate;

@interface WCFinderTextStateInvalidView : UIView <TextStateBaseMediaView>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) WCFinderFeedDetailStatusView *statusView;
@property (nonatomic) double transitionProgress;
@property (readonly, nonatomic) double mediaAspectRatio;
@property (weak, nonatomic) id<TextStateBaseMediaViewDelegate> textStateDelegate;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (nonatomic, getter=isForceMuted) BOOL forceMuted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setInvalidText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)startPlayMedia;
- (void)pausePlayMedia;
- (void).cxx_destruct;

@end
