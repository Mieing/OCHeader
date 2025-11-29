@class NSString, NSDictionary, IESLLTempoContextStore, LLDitoPageContext;

@interface IESLLPOIDetailDitoTempoNativeModule : NSObject <JSModule>

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (weak, nonatomic) IESLLTempoContextStore *tempoContextStore;
@property (weak, nonatomic) LLDitoPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithParam:(id)a0;
- (id)getDitoContainerSize:(id)a0;
- (id)inner_containerSizeWithType:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
