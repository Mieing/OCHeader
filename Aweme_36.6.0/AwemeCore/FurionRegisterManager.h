@class NSMutableDictionary;

@interface FurionRegisterManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *registerInfoMaps;

- (void)registerFactorGroup:(id)a0 bizInfo:(id)a1 error:(id *)a2;
- (void)registerCombineFactor:(id)a0 bizInfo:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;

@end
