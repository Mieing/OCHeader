@class NSDictionary, NSString, NSMutableSet;

@interface YataExchangeTransaction : YataModule <YataNodeFieldsChangedMessage>

@property (readonly, nonatomic) NSDictionary *requestParams;
@property (readonly, nonatomic) NSString *updateAPIPath;
@property (nonatomic) long long protocolSeqNumber;
@property (retain, nonatomic) NSMutableSet *changeNodeList;
@property (nonatomic) double responseTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)queryRequestWithParams:(id)a0 APIPath:(id)a1 completion:(id /* block */)a2 metricsBlock:(id /* block */)a3;
- (id)gzipYataParamsStringWithOperatorKey:(id)a0 eventName:(id)a1 extraFields:(id)a2;
- (id)yataParamsWithOperatorKey:(id)a0 eventName:(id)a1 extraFields:(id)a2;
- (id)composeYataParamsWithoutOperator;
- (id)initWithYataInstance:(id)a0;
- (void)nodeFieldsChangedByAdjust:(id)a0;
- (void)nodeFieldsSynchronize:(id)a0;
- (id)currentTriggerNodeName;
- (id)modelWithYataData:(id)a0 error:(id *)a1;
- (id)currentEventTrigger;
- (id)buildUpComposeParams:(id)a0 operatorType:(id)a1 eventName:(id)a2 nodeName:(id)a3 errors:(id *)a4;
- (id)gzipWithParams:(id)a0 eventName:(id)a1 nodeName:(id)a2 error:(id *)a3;
- (id)composeParamsWithOperatorKey:(id)a0 eventName:(id)a1 operatorType:(id)a2 nodeName:(id)a3 ignoreError:(BOOL)a4;
- (id)gzipYataParamsStringWithComposeParams:(id)a0 eventName:(id)a1 nodeName:(id)a2;
- (id)yataProtocolInfo;
- (id)filterDataDict:(id)a0 filterStrategy:(id)a1;
- (id)changeNodeListInfo;
- (void)refreshRenderProtocol:(id)a0;
- (void)uplinkWithProtocol:(id)a0 eventData:(id)a1 completionBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
