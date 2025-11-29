@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWESECHybridParamsSubscriber : NSObject <SECHybridEventSubscriber> {
    NSObject<OS_dispatch_queue> *_workQ;
}

@property (retain, nonatomic) NSMutableDictionary *eventDicts;
@property (retain, nonatomic) Class decisionClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)keyTagsDict:(id)a0;
- (id)prepareContextWith:(id)a0;
- (id)prepareInterestLogWith:(id)a0;
- (void)setupDecisionMaker:(id)a0;
- (void).cxx_destruct;
- (void)handleEvent:(id)a0;
- (void)_handleEvent:(id)a0;
- (id)subscriberId;
- (void)report:(id)a0;

@end
