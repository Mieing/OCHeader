@class NSString, AnnieXContainerContextModel;

@interface AnnieXContainerBaseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AnnieXContainerContextModel *contextModel;
@property (copy, nonatomic) NSString *containerName;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *viewType;
@property (copy, nonatomic) NSString *coreViewType;
@property (copy, nonatomic) NSString *biz;
@property (copy, nonatomic) NSString *templateResType;
@property (copy, nonatomic) NSString *schema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)collectContainerContext:(id)a0 value:(id)a1;
- (void)collectContainerBase:(id)a0 value:(id)a1;
- (id)getBaseContext;
- (void).cxx_destruct;
- (id)init;

@end
