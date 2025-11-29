@class NSArray, CContact, NSString;
@protocol ContactTagEditLogicDelegate;

@interface ContactTagEditLogic : MMObject <IContactLabelMgrExt> {
    unsigned int _uiJobID;
    int TagCountOfCreateTagScence;
    int TagCountOfExistTagScence;
}

@property (retain, nonatomic) NSArray *arrTagNameList;
@property (retain, nonatomic) NSArray *arrAllTagNameList;
@property (retain, nonatomic) NSArray *arrContactTagNameList;
@property (weak, nonatomic) id<ContactTagEditLogicDelegate> delegate;
@property (retain, nonatomic) CContact *m_contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0;
- (BOOL)isCreateNewTagName;
- (BOOL)isModContactTagName;
- (void)JobForTagEdit:(id)a0 withAllTags:(id)a1 contactTags:(id)a2;
- (unsigned int)JobForCreateTagNameWithServer;
- (unsigned int)JobForContactTagChanged;
- (void)callDelegate:(int)a0;
- (void)onAddContactLabel:(id)a0 withRetCode:(int)a1 andEventId:(unsigned int)a2;
- (void)setContactLabel:(id)a0 withRetCode:(int)a1 andEventId:(unsigned int)a2;
- (void).cxx_destruct;

@end
