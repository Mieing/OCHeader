@class NSString, AWEOfficialDetailListViewController, AWEOfficialDetailListUnreadBottomTipView;
@protocol AWEOfficialDetailListUnreadBottomTipViewProtocol;

@interface AWEIMOfficialDetailListBottomUnreadTipComponent : NSObject <AWEIMOfficialDetailListBottomUnreadTipActionProtocol>

@property (weak, nonatomic) id<AWEOfficialDetailListUnreadBottomTipViewProtocol> delegate;
@property (weak, nonatomic) AWEOfficialDetailListViewController *weakVC;
@property (retain, nonatomic) AWEOfficialDetailListUnreadBottomTipView *bottomTipView;
@property (nonatomic) unsigned long long currentLatestIndex;
@property (nonatomic) long long maxLimitCount;
@property (readonly, nonatomic) BOOL isShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideBottomTips;
- (id)initWithVCParent:(id)a0 delegate:(id)a1;
- (void)showBottomTipViewWithCount:(unsigned long long)a0;
- (void)bottomUnreadTipViewWillHandleCellModel:(id)a0;
- (void).cxx_destruct;

@end
