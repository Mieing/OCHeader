@class ContactTagData, NSMutableDictionary, MMUIViewController, NSString, ContactBatchModifyLogic, WCFinderBatchModContactTypeTask;
@protocol ContactsAuthorityManageModifyContactLogicDelegate;

@interface ContactsAuthorityManageModifyContactLogic : MMObject <ContactBatchModifyLogicDelegate, WCFinderBatchModContactTypeTaskDelegate, ITopStoryColikeExt> {
    ContactBatchModifyLogic *m_contactBatchModifyLogic;
    WCFinderBatchModContactTypeTask *m_finderBatchContactTask;
}

@property (retain, nonatomic) NSMutableDictionary *m_dicMultiSelect;
@property (retain, nonatomic) NSMutableDictionary *m_dicExistContact;
@property (retain, nonatomic) NSMutableDictionary *m_dicHandleMultiSelect;
@property (retain, nonatomic) MMUIViewController *m_currentViewController;
@property (nonatomic) long long m_contactsAuthorityManageModifyAction;
@property (weak, nonatomic) id<ContactsAuthorityManageModifyContactLogicDelegate> delegate;
@property (retain, nonatomic) ContactTagData *m_contactTagData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initData;
- (void)modifyAuthorityDetailAddContactWithDicMultiSelect:(id)a0 andDicExistContact:(id)a1;
- (void)modifyAuthorityDetailAddContactWithDicMultiSelect:(id)a0 andDicExistContact:(id)a1 currentViewController:(id)a2;
- (void)modifyAuthorityDetailDeleteContactWithDicMultiSelect:(id)a0 andDicExistContact:(id)a1;
- (void)modifyAuthorityDetailDeleteContactWithDicMultiSelect:(id)a0 andDicExistContact:(id)a1 currentViewController:(id)a2;
- (id)getContactBatchModifyLogic;
- (id)getCurrentViewController;
- (void)reCallModify;
- (id)getTipSuccessTitle;
- (void)batchAddSocialBlackContactType;
- (void)batchRemoveSocialBlackContactType;
- (void)batchAddSnsBlackContactType;
- (void)batchRemoveSnsBlackContactType;
- (void)batchAddSnsNointerestingContactType;
- (void)batchRemoveSnsNointerestingContactType;
- (void)batchAddFinderBlackContactType;
- (void)batchRemoveFinderBlackContactType;
- (void)batchAddFinderOutsideContactType;
- (void)batchRemoveFinderOutsideContactType;
- (void)batchAddWowHideContactType;
- (void)batchRemoveWowHideContactType;
- (void)batchAddWowBlockContactType;
- (void)batchRemoveWowBlockContactType;
- (void)batchAddWeRunBlackContactType;
- (void)batchRemoveWeRunBlackContactType;
- (void)reloadAuthorityDetailModifyFailContact:(id)a0;
- (void)OnContactBatchModify:(id)a0 withRet:(unsigned int)a1 errorMsg:(id)a2 isNetWorkError:(BOOL)a3;
- (void)handelSocialBlackContactBatchModify:(id)a0 withRet:(unsigned int)a1 errorMsg:(id)a2 isNetWorkError:(BOOL)a3;
- (void)handelSnsBlackContactBatchModify:(id)a0 withRet:(unsigned int)a1 errorMsg:(id)a2 isNetWorkError:(BOOL)a3;
- (void)handelWeRunBlackContactBatchModify:(id)a0 withRet:(unsigned int)a1 errorMsg:(id)a2 isNetWorkError:(BOOL)a3;
- (void)OnContactBatchModifySnsNointeresting:(id)a0 resultFlag:(BOOL)a1;
- (void)finderBatchModContactTypeTask:(id)a0 finishWithSuccessNames:(id)a1 failedNames:(id)a2 allSuccess:(BOOL)a3;
- (void)onAllRequestColikeBlockEnd:(long long)a0 sucCount:(long long)a1 failCount:(long long)a2 failInfo:(id)a3;
- (void)modLocalWowData;
- (void).cxx_destruct;

@end
