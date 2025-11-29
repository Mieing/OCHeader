@class NSObject;
@protocol OS_dispatch_queue, YataToolDataCutDelegate;

@interface YataDataCutTool : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataCutSerialQueue;
@property (weak, nonatomic) id<YataToolDataCutDelegate> dataCutDelegate;

- (void)asyncDataCutWithProtocolData:(id)a0 identifier:(id)a1;
- (id)initWithDataCutDelegate:(id)a0;
- (id)nodeCutWithProtocolData:(id)a0 identifier:(id)a1;
- (id)globalCutWithProtocolData:(id)a0 identifier:(id)a1;
- (id)nodeDataCutWithProtocolData:(id)a0 identifier:(id)a1;
- (void)renderNodeKeyArray:(id)a0 inStructure:(id)a1 shouldSavedKeys:(id)a2 identifier:(id)a3 data:(id)a4;
- (void).cxx_destruct;

@end
