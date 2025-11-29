@class NSString;

@interface AWESearchClientServerExtraParamProvider : NSObject <AWESearchRequestParamsProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dependKeys;
+ (id)getParamsWithContext:(id)a0 dependKeys:(id)a1;
+ (id)provideKeys;
+ (BOOL)shouldMergeRouterParamsWithContext:(id)a0;
+ (id)mergeRouterParamsWithValueDict:(id)a0 context:(id)a1;
+ (BOOL)shouldMergeExtraLogParamsWithContext:(id)a0;
+ (id)mergeExtraLogParamsWithValueDict:(id)a0 context:(id)a1;
+ (BOOL)shouldMergeContextSameNameParamsWithContext:(id)a0;
+ (id)mergeContextSameNameParamsWithValueDict:(id)a0 context:(id)a1;
+ (id)mergeUgcTopicParamsWithValueDict:(id)a0 context:(id)a1;
+ (id)getMaterialCheckParams;


@end
