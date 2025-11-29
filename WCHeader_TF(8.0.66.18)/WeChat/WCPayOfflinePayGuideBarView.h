@class WCPayWebImageView, WCPayOfflinePayGuideBar, UIButton, MMUILabel;
@protocol WCPayOfflinePayGuideBarViewDelegate;

@interface WCPayOfflinePayGuideBarView : UIView

@property (retain, nonatomic) WCPayOfflinePayGuideBar *viewData;
@property (weak, nonatomic) id<WCPayOfflinePayGuideBarViewDelegate> delegate;
@property (retain, nonatomic) WCPayWebImageView *logoImgView;
@property (retain, nonatomic) MMUILabel *contentLabel;
@property (retain, nonatomic) UIButton *clickBtn;

- (id)initWithContiainerWidth:(double)a0 delegate:(id)a1 viewData:(id)a2;
- (void)setupContentView;
- (void)onBtnClick;
- (void).cxx_destruct;

@end
