@class NSString, NSObject;

@interface WCWebviewEvent : MMObject <WCWebviewEvent>

@property (nonatomic) BOOL bCanceled;
@property (retain, nonatomic) NSObject *eventContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
