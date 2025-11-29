@class NSString, NSArray, YataEventData, YataStore, NSMutableDictionary, NSDictionary, NSMutableArray, YataProtocolModel;
@protocol YataInstanceInnerInterface;

@interface YataAdjustExprState : NSObject <YataState>

@property (retain, nonatomic) NSDictionary *triggerParams;
@property (copy, nonatomic) NSString *triggerName;
@property (copy, nonatomic) NSString *currentNodeName;
@property (retain, nonatomic) YataProtocolModel *cacheProtocol;
@property (retain, nonatomic) NSArray *updateList;
@property (retain, nonatomic) NSMutableArray *adjustParamsArray;
@property (retain, nonatomic) NSDictionary *currentNodeDataFields;
@property (copy, nonatomic) NSString *currentRenderNodeKey;
@property (retain, nonatomic) YataEventData *eventData;
@property (retain, nonatomic) NSMutableDictionary *mergedProtocolDataDict;
@property (weak, nonatomic) id<YataInstanceInnerInterface> yataInstance;
@property (nonatomic) BOOL hasFailedConfig;
@property (weak, nonatomic) YataStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAdjustEventData:(id)a0;
- (BOOL)adjustStoreFields;
- (void)updateAdjustExprParamsArray;
- (BOOL)adjustExprWithUpdateStrategy:(id)a0 dataItemFields:(id)a1 updatedFieldsList:(id)a2 updateFieldsData:(id)a3;
- (BOOL)isPassFilterWithStrategy:(id)a0 error:(id *)a1;
- (void)reportExprError:(id)a0 type:(unsigned long long)a1;
- (void)preprocessWithStrategy:(id)a0 preprocessError:(id *)a1;
- (id)targetNodeFieldsWithStrategy:(id)a0 dataItemFields:(id)a1 currentUpdatedFields:(id)a2 error:(id *)a3;
- (id)updateWithStrategy:(id)a0 dataFieldsArray:(id)a1 updateFieldsError:(id *)a2;
- (id)updateFieldsWithUpdateFieldsExprs:(id)a0 adjustExprDataFields:(id)a1 updateFieldsError:(id *)a2;
- (id)patchOperations:(id)a0 adjustExprDataFields:(id)a1 patchError:(id *)a2;
- (id)matchNodeWithExprs:(id)a0 currentUpdatedFields:(id)a1 matchNodeExpressionError:(id *)a2;
- (BOOL)matchNodeResultWithExprs:(id)a0 nodeFields:(id)a1 triggerParams:(id)a2 expressionWrapper:(id)a3 ExpressionError:(id *)a4;
- (void).cxx_destruct;

@end
