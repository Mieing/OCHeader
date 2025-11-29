@class LiveOnlineInfo, NSString, UIImageView, MMUIView, NSMutableArray, MMUILabel;

@interface MMFinderLiveOnlineInfoBar : MMLiveBaseOnlineStateBar <WCFinderHeadImageViewDelegate>

@property (retain, nonatomic) NSMutableArray *onlineTopRewarderInfoFacedes;
@property (retain, nonatomic) MMUIView *topUsersHeadersContainerView;
@property (retain, nonatomic) MMUIView *backgroundView;
@property (retain, nonatomic) MMUILabel *onlineCountLabel;
@property (retain, nonatomic) NSMutableArray *headImageViews;
@property (retain, nonatomic) UIImageView *arrowImage;
@property (retain, nonatomic) LiveOnlineInfo *currentUserLiveOnlineInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andTaskId:(id)a1 componentKey:(id)a2;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWithOnlineBarInfo:(id)a0;
- (void)updateWithOnlineBarInfo:(id)a0 customCountStr:(id)a1;
- (void)updateTopUsersHeadersContainerView;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)a0 image:(id)a1 urlString:(id)a2;
- (void)finderHeadImageViewLoadUrlImageFailed:(id)a0 timeConsume:(long long)a1 errorCode:(long long)a2;
- (void)updateOnlineCountTitle:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)onOnlineStateButtonClicked;
- (void).cxx_destruct;

@end
