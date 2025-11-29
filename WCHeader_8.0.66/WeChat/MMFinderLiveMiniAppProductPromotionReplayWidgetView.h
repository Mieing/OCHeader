@class UILabel, UIView, UIImageView, AnyPromise, MMFinderLiveTaskId, FinderLiveGetProductPromoteReplayWidgetResp, MMWebImageView;

@interface MMFinderLiveMiniAppProductPromotionReplayWidgetView : UIView

@property (nonatomic) unsigned long long productID;
@property (retain, nonatomic) MMFinderLiveTaskId *taskID;
@property (retain, nonatomic) FinderLiveGetProductPromoteReplayWidgetResp *data;
@property (retain, nonatomic) AnyPromise *loadDataPromise;
@property (retain, nonatomic) MMWebImageView *imageView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *borderView;

- (id)initWithTaskID:(id)a0 productID:(unsigned long long)a1;
- (void)loadDataIfNever;
- (void)requestWillDisplayOrNot:(id /* block */)a0;
- (void)onClicked;
- (void)initUI;
- (void)layoutSubviews;
- (void)layoutOnParent;
- (void).cxx_destruct;

@end
