@class NSString;

@interface EcsFuncDeclareObjc : UnitRCObjcBaseClass <EcsFuncDeclare>

@property (readonly, copy, nonatomic) id /* block */ Void_MmecAddProductToShopBagResp_2_Block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)to_Void_Empty_Block:(id)a0;
+ (id)from_Void_Empty_Block:(id /* block */)a0;
+ (id /* block */)to_Void_EcsShopDataRespWrapper_1_Block:(id)a0;
+ (id)from_Void_EcsShopDataRespWrapper_1_Block:(id /* block */)a0;
+ (id)from_Void_MmecAddProductToShopBagResp_2_Block:(id /* block */)a0;
+ (id /* block */)to_Void_MmecAddProductToShopBagResp_2_Block:(id)a0;

- (void)Void_Empty;
- (id /* block */)Void_Empty_Block;
- (void)setVoid_Empty_Block:(id /* block */)a0;
- (void)Void_EcsShopDataRespWrapper_1:(id)a0;
- (id /* block */)Void_EcsShopDataRespWrapper_1_Block;
- (void)setVoid_EcsShopDataRespWrapper_1_Block:(id /* block */)a0;
- (void)Void_MmecAddProductToShopBagResp_2:(id)a0;
- (void).cxx_destruct;

@end
