@interface WAAppTaskRunningEvent_WebViewMenuAction : WAAppTaskRunningEvent_WebViewActionBase

@property (nonatomic) unsigned long long menuAction;
@property (nonatomic) BOOL shareMenuCanBeOperated;

- (unsigned long long)eventType;
- (id)description;

@end
