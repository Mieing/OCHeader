@class NSString, TIMXSDKInstance;

@interface TIMXECOMMessageReadsResultTask : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getResultWithReadIndexList:(id)a0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
