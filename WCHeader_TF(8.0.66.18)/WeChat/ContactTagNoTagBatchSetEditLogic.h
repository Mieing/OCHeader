@class NSArray, NSString;
@protocol ContactTagNoTagBatchSetEditLogicDelegate;

@interface ContactTagNoTagBatchSetEditLogic : MMObject <IContactLabelMgrExt> {
    unsigned int m_uiJobID;
}

@property (retain, nonatomic) NSArray *m_arrTagNameList;
@property (retain, nonatomic) NSArray *m_arrAllTagNameList;
@property (retain, nonatomic) NSArray *m_arrContactUserName;
@property (weak, nonatomic) id<ContactTagNoTagBatchSetEditLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)isCreateNewTagName;
- (void)JobForTagEdit:(id)a0 withAllTags:(id)a1 arrContactUserNames:(id)a2;
- (unsigned int)JobForCreateTagNameWithServer;
- (unsigned int)JobForContactTagChanged;
- (void)callDelegate:(int)a0;
- (void)onAddContactLabel:(id)a0 withRetCode:(int)a1 andEventId:(unsigned int)a2;
- (void)setContactLabel:(id)a0 withRetCode:(int)a1 andEventId:(unsigned int)a2;
- (void).cxx_destruct;

@end
