@class NSString, TIMXSDKInstance;

@interface TIMXECOMFetchMemberReadsByInboxHandler : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchWithConvIDs:(id)a0 convShortIDs:(id)a1 requestFrom:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
