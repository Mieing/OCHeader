@class NSString, NSDictionary, LynxFetchModuleEventSender;

@interface LynxFetchModule : NSObject <LynxModule> {
    LynxFetchModuleEventSender *_eventSender;
}

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (retain, nonatomic) id extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithParam:(id)a0;
- (void)fetch:(id)a0 resolve:(id /* block */)a1 reject:(id /* block */)a2;
- (void)request:(id)a0 withResolve:(id /* block */)a1 withHttpService:(id)a2;
- (void)requestStreaming:(id)a0 withResolve:(id /* block */)a1 withHttpService:(id)a2;
- (void).cxx_destruct;

@end
