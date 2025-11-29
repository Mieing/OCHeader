@class MMUIActivityIndicatorView, NSString, UIScrollView, NSMutableArray, UIView;
@protocol WCPayFaceReceiverViewDelegate;

@interface WCPayFaceReceiverView : MMUIView <IWCPayFaceHBMgrExt, UIScrollViewDelegate>

@property (retain, nonatomic) NSMutableArray *receiverHeadImages;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIScrollView *backgroundScrollView;
@property (retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView;
@property (nonatomic) BOOL bScrollViewAnimating;
@property (retain, nonatomic) NSMutableArray *arrReceiverInfos;
@property (nonatomic) long long balanceNum;
@property (weak, nonatomic) id<WCPayFaceReceiverViewDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initDataAndView;
- (void)addReceiver:(id)a0;
- (void)addReceiver:(id)a0 animated:(BOOL)a1;
- (void)clearAllReceiversAndDisappear;
- (void)refreshViewWithName:(id)a0;
- (void)makeHeadImageView:(id)a0;
- (BOOL)checkExisted:(id)a0;
- (void)viewDetail;
- (void)scrollViewDidScroll:(id)a0;
- (void)clearIndicatorView;
- (void)updateFaceHB:(id)a0;
- (void).cxx_destruct;

@end
