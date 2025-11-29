@class NSMutableDictionary;
@protocol CContactOPLogDelegate;

@interface CContactOPLog : NSObject {
    NSMutableDictionary *m_dicSkipContacts;
    BOOL m_isHadReloadSkipContact;
}

@property (weak, nonatomic) id<CContactOPLogDelegate> m_delegate;

+ (id)getModifyContactData:(id)a0 addScene:(unsigned int)a1 delScene:(unsigned int)a2;
+ (unsigned int)start_ModifyContact:(id)a0;
+ (unsigned int)start_DeleteContact:(id)a0 isRetainChatHistory:(BOOL)a1;
+ (unsigned int)start_ModifySocialBlackList:(id)a0 modType:(long long)a1;
+ (void)start_ModifyContactUserName:(id)a0 remark:(id)a1 isChangeRemark:(BOOL)a2 arrPhone:(id)a3 isChangePhone:(BOOL)a4 contactDesc:(id)a5 isChangecontactDesc:(BOOL)a6 callbackBlock:(id /* block */)a7;
+ (void)handelStartModifyContactUserName:(id)a0 arrMultipleOplogCmdItem:(id)a1 isSuccess:(BOOL)a2 oplogRet:(id)a3 ret:(int)a4 callbackBlock:(id /* block */)a5;

- (id)init;
- (void)add_SkipContact:(id)a0;
- (BOOL)isSkipContact:(id)a0;
- (BOOL)add_ModifyContact:(id)a0 addScene:(unsigned int)a1 delScene:(unsigned int)a2 sync:(BOOL)a3;
- (BOOL)add_ModifyContact:(id)a0 sync:(BOOL)a1;
- (BOOL)add_ModifyContact:(id)a0 addScene:(unsigned int)a1 sync:(BOOL)a2;
- (BOOL)add_ModifyContact:(id)a0 delScene:(unsigned int)a1 sync:(BOOL)a2;
- (BOOL)add_DeleteChatContact:(id)a0 sync:(BOOL)a1;
- (BOOL)add_DeleteContact:(id)a0 isRetainChatHistory:(BOOL)a1 delScene:(unsigned int)a2 sync:(BOOL)a3;
- (BOOL)add_ModifyNotifyStatus:(id)a0 withStatus:(unsigned int)a1 NeedSync:(BOOL)a2;
- (BOOL)add_ModifyUnfoldSns:(id)a0 withStatus:(unsigned int)a1 NeedSync:(BOOL)a2;
- (BOOL)add_ModifyContact:(id)a0 withDescription:(id)a1 NeedSync:(BOOL)a2;
- (BOOL)add_ModifyContact:(id)a0 withPhone:(id)a1 NeedSync:(BOOL)a2;
- (void).cxx_destruct;

@end
