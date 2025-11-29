@interface AWEIMRefetchResourcesURLHelper : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)refetchURLWithResourcesType:(unsigned long long)a0 format:(unsigned long long)a1 URI:(id)a2 completion:(id /* block */)a3;
- (void)refetchURLWithResourcesType:(unsigned long long)a0 format:(unsigned long long)a1 URL:(id)a2 completion:(id /* block */)a3;
- (void)p_refetchURLWithResourcesType:(unsigned long long)a0 format:(unsigned long long)a1 paramType:(unsigned long long)a2 paramKey:(id)a3 completion:(id /* block */)a4;
- (id)p_requestContextWithType:(unsigned long long)a0 format:(unsigned long long)a1 paramType:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
