@class NSString, TIMXSDKInstance;

@interface TIMXECOMUpsertLocalConversationTask : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)sdkConversationTypeFromPBType:(int)a0;

@end
