@class WCFinderFeedImageCDNView, NSString, WCFinderDataItem, MMUIButton, UILabel;

@interface WCFinderLiveCompleteLiveReplayView : UIView <WCFinderFeedImageCDNViewDelegate>

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) WCFinderFeedImageCDNView *coverView;
@property (retain, nonatomic) MMUIButton *actionButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (copy, nonatomic) id /* block */ liveReplayViewBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)finderFeedImageLoadFinish;
- (void)updateData:(id)a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)liveReplayViewClick;
- (void)layoutUI;
- (void).cxx_destruct;

@end
