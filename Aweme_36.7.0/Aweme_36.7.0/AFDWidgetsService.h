@class NSString;

@interface AFDWidgetsService : HTSService <AFDWidgetsService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateUserDefaultsForStartShootWidgetWithUserModel:(id)a0;
- (void)setNeedTransferToChatWithConversationID:(id)a0 conversationType:(long long)a1;
- (void)transferToChatIfNeeded;
- (void)updateUserDefaultsWithDict:(id)a0 forWidgetType:(unsigned long long)a1;
- (void)setup;

@end
