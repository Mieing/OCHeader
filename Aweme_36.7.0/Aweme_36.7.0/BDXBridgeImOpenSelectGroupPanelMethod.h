@class NSString;

@interface BDXBridgeImOpenSelectGroupPanelMethod : BDXBridgeMethod <AWEIMShareContactListSelectConvMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)didSelectCancelled:(BOOL)a0 convID:(id)a1 newCreate:(BOOL)a2 ext:(id)a3;
- (void)__completionNoSuccess;
- (void)__completionHandler:(id)a0 shortId:(id)a1 cType:(id)a2 newCreate:(BOOL)a3 success:(BOOL)a4 ext:(id)a5;
- (id)__resultWithCid:(id)a0 shortId:(id)a1 cType:(id)a2 newCreate:(BOOL)a3 ext:(id)a4;
- (id)__statusSuccess:(BOOL)a0;
- (void)__completionWithCancel;
- (id)__cTypeWithCon:(id)a0;
- (long long)authType;
- (id)init;
- (void)setCompletionHandler:(id /* block */)a0;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id)methodName;

@end
