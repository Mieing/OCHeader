@class NSDictionary, NSString, TIMXSDKInstance;

@interface TIMXECOMUpdateWithLocalConversationSettingsHandler : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (copy, nonatomic) NSDictionary *updatedKeyValues;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL isRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)upsertWithLocalObject:(id)a0 rootObject:(id)a1 completion:(id /* block */)a2;

- (void)updateWithKeyValues:(id)a0 onConversation:(id)a1 completion:(id /* block */)a2;
- (BOOL)validResponse:(id)a0;
- (void)updateSettingsFailedWithLogMarker:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
