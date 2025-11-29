@class NSString, NSMutableDictionary, ContactRemarkLogic;

@interface AutoSetRemarkMgr : MMUserService <MMServiceProtocol, IContactMgrExt, IAddressBookMgrExt> {
    NSMutableDictionary *m_dicMobileRemarkList;
    NSMutableDictionary *m_dicStrangerRemarkList;
    NSMutableDictionary *m_dicUserAssociateMobileList;
    NSMutableDictionary *m_dicStrangerAttributeList;
    NSMutableDictionary *m_dicWaitToSetRemark;
}

@property (retain, nonatomic) ContactRemarkLogic *remarkLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)GetPathOfUserAssociateMobileList;
+ (id)GetPathOfVerifyList;
+ (id)GetPathOfStrangerRemarkList;
+ (id)GetPathOfStrangerAttributeList;

- (id)init;
- (void)LoadData;
- (void)SaveVerifyMobileData;
- (void)SaveMobileData;
- (void)SaveStrangerData;
- (void)AddVerifyUsr:(id)a0 MobileIdentify:(id)a1;
- (void)AssociateVerifyMobileUsr:(id)a0 MobileIdentify:(id)a1;
- (void)InternalSetStrangerRemark:(id)a0 Remark:(id)a1;
- (void)InternalSetStrangerAttribute:(id)a0 StringValue:(id)a1;
- (void)InternalSetStrangerAttribute:(id)a0 ObjValue:(id)a1;
- (void)SetStrangerRemark:(id)a0 Remark:(id)a1;
- (void)SetStrangerAttribute:(id)a0 AttributeName:(int)a1 Value:(id)a2;
- (void)SetStrangerAttributeByName:(id)a0 AttributeName:(int)a1 Value:(id)a2;
- (id)GetStrangerAttribute:(id)a0 AttributeName:(int)a1;
- (void)ClearStrangerAttribute:(id)a0 AttributeName:(int)a1;
- (void)AutoSetStrangerAttribute:(id)a0 AttributeName:(int)a1;
- (void)SetDesc:(id)a0;
- (id)GetStrangerRemark:(id)a0;
- (void)SetRemark:(id)a0;
- (id)getAndClearStrangerRemark:(id)a0;
- (id)getAndClearMobileIdentify:(id)a0;
- (id)getAndClearUserAssociateMobileIdentify:(id)a0;
- (void)clearRemark:(id)a0;
- (void)autoSetRemark:(id)a0;
- (void)OnAddressBookLoadedComplete;
- (void)onModifyContact:(id)a0;
- (void)onModifyContactProcessMoblie:(id)a0;
- (void)SetUserAssociateMobileIdentify:(id)a0;
- (void)onModifyContactProcessRemark:(id)a0;
- (void)onModifyContactProcessDesc:(id)a0;
- (void)onModifyContactProcessTagName:(id)a0;
- (void)onModifyContactProcessPhone:(id)a0;
- (void)onModifyContactProcessCardImage:(id)a0;
- (void).cxx_destruct;

@end
