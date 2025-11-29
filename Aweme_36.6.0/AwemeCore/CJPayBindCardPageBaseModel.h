@class NSString;

@interface CJPayBindCardPageBaseModel : JSONModel <CJPayBindCardPageModelProtocol>

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *merchantId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)keyMapperDict;
+ (id)keysOfParams;

- (void).cxx_destruct;

@end
