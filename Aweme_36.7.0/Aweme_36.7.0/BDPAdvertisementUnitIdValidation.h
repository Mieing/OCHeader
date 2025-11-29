@interface BDPAdvertisementUnitIdValidation : NSObject

+ (id)p_getAdStringWithType:(long long)a0;
+ (long long)checkAdvertisementUnitIdStatus:(id)a0 type:(long long)a1 model:(id)a2 error:(id *)a3;
+ (BOOL)hasValidUnitIdWithModel:(id)a0 type:(long long)a1;
+ (id)getFirstValidAdUnitIdWithModel:(id)a0 type:(long long)a1;
+ (id)transformError:(id)a0 status:(long long)a1;

@end
