@class AWESearchScanDataContext, NSString, UIImageView, IESForestKit, UIView, UILabel, IESLiveVideoGiftController;

@interface AWESearchScanResultLoadingView : UIView <IESLiveVideoGiftControllerDelegate>

@property (retain, nonatomic) IESForestKit *forestKit;
@property (retain, nonatomic) IESLiveVideoGiftController *startLoadingController;
@property (retain, nonatomic) IESLiveVideoGiftController *loopLoadingController;
@property (retain, nonatomic) UIImageView *bgView;
@property (retain, nonatomic) UIView *coverView;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIView *cancelView;
@property (retain, nonatomic) UILabel *cancelLabel;
@property (retain, nonatomic) AWESearchScanDataContext *datacontext;
@property (copy, nonatomic) id /* block */ clickCancleBtnBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishPlayingWithError:(id)a0;
- (void)videoGiftController:(id)a0 didFinishPlayingWithError:(id)a1;
- (void)setupUIWithImage:(id)a0;
- (void)clickCancleBtn;
- (id)loopPathMap;
- (id)startPathMap;
- (id)initWithImage:(id)a0 dataContext:(id)a1;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)layoutSubviews;
- (void)showLoading;

@end
