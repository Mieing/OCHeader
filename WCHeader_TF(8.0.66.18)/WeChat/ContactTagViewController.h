@class NSArray, CContact, NSString, ContactTagEditLogic;

@interface ContactTagViewController : TagViewController <IContactLabelMgrExt, ContactTagEditLogicDelegate> {
    ContactTagEditLogic *m_TagEditLogic;
    BOOL _bIsNeedReloadView;
    BOOL isAlreadyDisMissSelf;
}

@property (retain, nonatomic) NSArray *previousContactTagNameList;
@property (retain, nonatomic) CContact *m_contact;
@property (nonatomic) BOOL needReloadWhenAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0;
- (void)dealloc;
- (void)onTouchView:(id)a0;
- (void)OnMyCancel;
- (void)viewDidLoad;
- (id)rightBarButtonTitle;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)initData;
- (void)initView;
- (id)getAllTagNameList;
- (id)getContactTagNameList;
- (void)editCancel;
- (void)editDone:(id)a0;
- (void)reportForTagEdit:(id)a0 withAllTags:(id)a1 contactTags:(id)a2;
- (void)InternalDisMissSelfAnimated:(BOOL)a0;
- (void)DismissTagViewControllerAnimated:(BOOL)a0;
- (void)onJobForTagEditRet:(int)a0;
- (void)buildAllTagsData:(id)a0;
- (void)buildContactTagsData:(id)a0;
- (void)reloadAllTags;
- (void)reloadCurrentTags;
- (void)onAllContactLabelUpdated:(id)a0 withRetCode:(int)a1 andEventId:(unsigned int)a2;
- (void).cxx_destruct;

@end
