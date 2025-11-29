@class UIImageView, NSString, CBaseContact;

@interface MultiTalkHDHeadView : UIView <MessageObserverDelegate, IStrangerContactMgrExt>

@property (retain, nonatomic) UIImageView *m_headView;
@property (retain, nonatomic) CBaseContact *m_contact;
@property (retain, nonatomic) NSString *m_headImgUrl;
@property (nonatomic) BOOL m_vaild;
@property (nonatomic) BOOL isCheckingNANEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateContact:(id)a0;
- (void)updateHeadImageUrl:(id)a0 contact:(id)a1;
- (void)updateNormalHeadToView;
- (BOOL)updateHDHeadToView;
- (void)dealloc;
- (void)downloadHDHeadImage;
- (id)getRealUserName:(id)a0;
- (void)internalGetImageForUrl;
- (void)internalGetImageForUsername;
- (void)MessageReturn:(unsigned int)a0 MessageInfo:(id)a1 Event:(unsigned int)a2;
- (void)onStrangerContactUpdated:(id)a0 Contact:(id)a1;
- (void)onStrangerContactUpdateForbidden:(id)a0;
- (void).cxx_destruct;

@end
