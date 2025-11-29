@class BDECRabbiFlyJSWorkerEvent;
@protocol BDECRabbiFlyIModel;

@interface BDECRabbiFlyJSWorkerPendingEvent : NSObject

@property (retain, nonatomic) id<BDECRabbiFlyIModel> dynamicModel;
@property (retain, nonatomic) BDECRabbiFlyJSWorkerEvent *event;
@property (nonatomic) unsigned long long msgType;
@property (copy, nonatomic) id /* block */ completion;

- (id)initWithDynamicModel:(id)a0 event:(id)a1 msgType:(unsigned long long)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
