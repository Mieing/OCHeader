@class NSString, UIScrollView;

@interface XMailBindWechatRegMailViewController : MMUIViewController <ILinkEventExt> {
    UIScrollView *m_scrollView;
}

@property (retain, nonatomic) NSString *mailAddr;
@property (retain, nonatomic) NSString *loginUrl;
@property (retain, nonatomic) NSString *headUrl;
@property (copy, nonatomic) id /* block */ onClickConfirmBlock;
@property (copy, nonatomic) id /* block */ onClickUseOtherMailBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)onReturn;
- (void)onClickConfirmBtn:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
