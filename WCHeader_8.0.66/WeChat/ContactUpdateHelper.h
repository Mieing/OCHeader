@class NSString;

@interface ContactUpdateHelper : NSObject <IStrangerContactMgrExt>

@property (retain, nonatomic) NSString *m_moduleName;
@property (retain, nonatomic) NSString *m_userName;
@property (copy, nonatomic) id /* block */ m_block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithModuleName:(id)a0;
- (void)startWithUserName:(id)a0 onUpdate:(id /* block */)a1;
- (BOOL)normalContactToBlock;
- (BOOL)strangerContactToBlock;
- (void)updateStangerContact;
- (void)clearBlock;
- (void)onStrangerContactUpdated:(id)a0 Contact:(id)a1;
- (void)onStrangerContactUpdateForbidden:(id)a0;
- (void).cxx_destruct;

@end
