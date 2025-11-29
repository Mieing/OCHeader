@class WCFinderMembershipPaymentSelectDetailView, NSArray, UIImageView, NSString, WCCoinConsumeParameter, WCFinderMembershipPaymentNoticeView;
@protocol WCFinderMembershipPaymentSelectViewDelegate;

@interface WCFinderMembershipPaymentSelectView : MMPageSheetBaseViewController <WCFinderMembershipPaymentSelectDetailViewDelegate>

@property (retain, nonatomic) WCCoinConsumeParameter *parameter;
@property (retain, nonatomic) WCFinderMembershipPaymentSelectDetailView *panelDetailView;
@property (retain, nonatomic) UIImageView *questionView;
@property (retain, nonatomic) WCFinderMembershipPaymentNoticeView *noticeView;
@property (retain, nonatomic) NSArray *memberPriceArray;
@property (weak, nonatomic) id<WCFinderMembershipPaymentSelectViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParameter:(id)a0 memberPriceArray:(id)a1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(BOOL)a0;
- (double)contentHeaderHeight;
- (double)contentFooterHeight;
- (void)panelLayoutFinished;
- (void)panelDidClickConsume:(unsigned long long)a0;
- (void)panelDidClickLink:(id)a0;
- (void)panelDidClickQuestionView:(id)a0;
- (void).cxx_destruct;

@end
