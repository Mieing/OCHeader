@class NSString, CPushContact, NSMutableArray, MMUIButton;
@protocol RedesignHelloMsgsPanelViewDelegate;

@interface RedesignHelloMsgsPanelView : UIView <LongPressMenuViewDelegate> {
    NSMutableArray *m_arrHellos;
    CPushContact *m_lastMsg;
    id m_replyTarget;
    SEL m_replySel;
}

@property (retain, nonatomic) NSString *nsChatName;
@property (retain, nonatomic) NSString *nsUserName;
@property (retain, nonatomic) NSMutableArray *arrBusinessCCardImageView;
@property (retain, nonatomic) MMUIButton *replyBtn;
@property (weak, nonatomic) id<RedesignHelloMsgsPanelViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getHelloMsgArrayContacts:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 Contact:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 Contact:(id)a1 delegate:(id)a2;
- (void)createHelloMsgPanelView;
- (void)setRelpyTarget:(id)a0 sel:(SEL)a1;
- (void)onReply:(id)a0;
- (void)onShowVerifyImageBtnClick:(id)a0;
- (void)reloadRedesignHelloMsgsPanelView;
- (id)getArrHellos;
- (BOOL)hasReplyBtn;
- (void)onLongPressMenuViewCopy:(id)a0;
- (void).cxx_destruct;

@end
