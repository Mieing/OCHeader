@class AWELocalMomentNotesInfo, NSMutableDictionary, NSString;

@interface AFDMomentNotesDataHandler : AFDMomentColorRingTableDataHandler <AWEUserMessage, AFDMomentNotesDataHandlerProtocol>

@property (retain, nonatomic) AWELocalMomentNotesInfo *draftNotesInfo;
@property (retain, nonatomic) NSMutableDictionary *notesAwemeMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)handleDiggNotification:(id)a0;
- (BOOL)isHaveNotes;
- (BOOL)updateUser:(id)a0 withNewUser:(id)a1;
- (void)didAppendMomentWithPublishModel:(id)a0;
- (void)didFinishPublishMomentWithPublishModel:(id)a0 isSuccess:(BOOL)a1;
- (BOOL)isPublishedNotes:(id)a0;
- (long long)getNotesTypeWithPublishModelType:(long long)a0;
- (long long)getNotesTypeWithCFItemType:(unsigned long long)a0;
- (id)getMomentNotesInfoWithUid:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
