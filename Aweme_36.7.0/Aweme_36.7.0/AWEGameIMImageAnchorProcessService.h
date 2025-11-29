@class NSString;

@interface AWEGameIMImageAnchorProcessService : NSObject <AWEIMImageAnchorProcessServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerService;
+ (id)sharedInstance;

- (id)processOriginSchema:(id)a0 withConversation:(id)a1 ext:(id)a2;
- (void)preloadServiceWhenImageDetailShow:(id)a0 withConversation:(id)a1 ext:(id)a2;
- (void)trackAnchorShowWithContext:(id)a0;
- (void)trackAnchorClickWithContext:(id)a0;
- (id)buildSchemaWithOriginSchema:(id)a0 ext:(id)a1;
- (id)p_trackGameCardParamsWithContext:(id)a0;

@end
