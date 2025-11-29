@class NSString;

@interface AWEIMActionRecordController : HTSService <AWEIMActionRecordController>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)__log:(id)a0;
- (id)addActionRecord:(id)a0;
- (id)removeActionRecord:(id)a0;
- (id)asyncGetValidActionRecordsWithConversationShortID:(id)a0 types:(id)a1;
- (id)__concatUserIDWithString:(id)a0;

@end
