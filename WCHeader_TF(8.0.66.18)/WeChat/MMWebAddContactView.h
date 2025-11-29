@class MMLoadingView, NSString, CContact, JSEvent, WOAPPrivacyConfirmLogic;
@protocol WebAddContactDelegate;

@interface MMWebAddContactView : MMUIView <PBMessageObserverDelegate> {
    NSString *m_nsUsrName;
    JSEvent *m_nsCallBack;
    MMLoadingView *m_loadingView;
    CContact *m_oContact;
    WOAPPrivacyConfirmLogic *_privacyConfirmLogic;
}

@property (weak, nonatomic) id<WebAddContactDelegate> m_delegate;
@property (nonatomic) int m_scene;
@property (retain, nonatomic) NSString *reportInfo;
@property (copy, nonatomic) NSString *scenenote;
@property (copy, nonatomic) NSString *finderBuffer;

- (id)initWithUsrName:(id)a0 CallBack:(id)a1;
- (void)dealloc;
- (void)initView;
- (void)initLoadingView;
- (void)UpdateView:(unsigned int)a0;
- (void)UpdateView:(unsigned int)a0 errMsg:(id)a1;
- (id)generateCustomViewForContact;
- (id)generateTextLabel:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fontSize:(double)a2 numberOfLines:(unsigned long long)a3;
- (void)layoutSubviewToOrientation:(long long)a0;
- (void)OnCancel;
- (void)OnAdd;
- (void)OnConfirm:(long long)a0;
- (void)OnAddOk;
- (void)CreateSearch;
- (void)CreateVerify;
- (void)HandleContact:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
