@interface IESIMGroupNoticeHintProvider : AWEIMChatListHintProviderComponentBase

- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (void)reloadHintWithCellContext:(id)a0;
- (BOOL)isCompatibleWithTimeText;
- (void)updateCellComponentWhenChatUpdate:(id)a0;
- (void)updateCellComponentWhenConSharedSyncedExtUpdate:(id)a0;
- (id)init;

@end
