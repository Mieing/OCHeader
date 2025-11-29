@interface WCWebviewNavigationEvent : WCWebviewEvent

@property (nonatomic) unsigned int eventValue;

- (id)initWithEventValue:(unsigned int)a0;
- (unsigned long long)eventHashValue;
- (id)eventDescription;

@end
