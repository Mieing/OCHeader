@class NSString;

@interface WAJSEventHandler_openLiteApp : WAJSEventHandler_BaseEvent <MMLiteAppExt>

@property (retain, nonatomic) NSString *page;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *enterType;
@property (nonatomic) BOOL isRedirect;
@property (nonatomic) BOOL openDataChannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void).cxx_destruct;

@end
