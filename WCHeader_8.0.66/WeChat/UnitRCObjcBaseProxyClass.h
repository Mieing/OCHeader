@interface UnitRCObjcBaseProxyClass : UnitRCObjcBaseClass

- (id)strongRC;
- (id)weakRC;
- (id)toObjc:(const void *)a0 rcType:(unsigned int)a1;
- (BOOL)isUnitRCProxy;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
