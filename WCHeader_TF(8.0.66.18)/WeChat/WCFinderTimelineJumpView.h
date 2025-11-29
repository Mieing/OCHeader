@class WCFinderFeedImageCDNView, UIImageView, NSString, UILabel, UIView;
@protocol WCFinderTimelineJumpViewDelegate;

@interface WCFinderTimelineJumpView : UIView <WCFinderFeedImageCDNViewDelegate>

@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) WCFinderFeedImageCDNView *thumbImageView;
@property (retain, nonatomic) UIView *containerView;
@property (weak, nonatomic) id<WCFinderTimelineJumpViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupSubviews;
- (void)updateWithDataItem:(id)a0 tips:(id)a1;
- (void)onClickAction;
- (void).cxx_destruct;

@end
