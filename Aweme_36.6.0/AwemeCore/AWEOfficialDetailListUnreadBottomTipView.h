@class AWEIMOfficialNoticebottomTipsContainerView, NSString, UIImageView, UILabel, AWEOfficialDetailListViewController;
@protocol AWEOfficialDetailListUnreadBottomTipViewProtocol;

@interface AWEOfficialDetailListUnreadBottomTipView : UIView <AWEIMOfficialDetailListBottomUnreadTipActionProtocol>

@property (retain, nonatomic) AWEIMOfficialNoticebottomTipsContainerView *bottomTipsContainer;
@property (retain, nonatomic) UIImageView *bottomIconImageView;
@property (retain, nonatomic) UILabel *bottomTipsLabel;
@property (weak, nonatomic) AWEOfficialDetailListViewController *weakVC;
@property (weak, nonatomic) id<AWEOfficialDetailListUnreadBottomTipViewProtocol> delegate;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) long long maxLimitCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (void)hideBottomTips;
- (void)showBottomTips;
- (void)tapOnBottomTips:(id)a0;
- (id)initWithVCParent:(id)a0 delegate:(id)a1;
- (void)showBottomTipViewWithCount:(unsigned long long)a0;
- (void)addBottomTipViewSubviews;
- (void)updateBottomTipViewWithCount:(unsigned long long)a0;
- (id)getBottomTipTextWithCount:(unsigned long long)a0;
- (void)layoutBottomIconImage;
- (void)layoutBottomTips;
- (double)getBottomTipViewTop;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;

@end
