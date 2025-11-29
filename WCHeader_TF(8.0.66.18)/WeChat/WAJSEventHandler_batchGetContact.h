@interface WAJSEventHandler_batchGetContact : WAJSEventHandler_BaseEvent

- (void)handleJSEvent:(id)a0;
- (void)getContactFromServerWithAppIdList:(id)a0;
- (void)returnResultWithContactList:(id)a0;
- (void)asyncBatchUpdateContacts:(id)a0;

@end
