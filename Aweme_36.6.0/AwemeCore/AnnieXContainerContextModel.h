@class NSNumber, NSString;

@interface AnnieXContainerContextModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *annieXIsAsyncCreateData;
@property (retain, nonatomic) NSNumber *annieXEngineIsFromCache;
@property (copy, nonatomic) NSString *annieXTemplateBundle;
@property (copy, nonatomic) NSString *annieXTemplateBundleCache;
@property (retain, nonatomic) NSNumber *annieXForestStreamingLoad;
@property (retain, nonatomic) NSNumber *annieXForestPreload;
@property (retain, nonatomic) NSNumber *annieXForestAutoLoadStrategy;
@property (retain, nonatomic) NSNumber *annieXEngineIsWarmup;
@property (retain, nonatomic) NSNumber *annieXEngineIsReuse;
@property (copy, nonatomic) NSString *annieXContainerType;
@property (copy, nonatomic) NSString *annieXCoreViewType;
@property (retain, nonatomic) NSNumber *annieXContainerForPage;
@property (retain, nonatomic) NSNumber *annieXCardModelIsReuse;
@property (retain, nonatomic) NSNumber *annieXPageIsConcurrentLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)collectContainerContext:(id)a0 value:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
