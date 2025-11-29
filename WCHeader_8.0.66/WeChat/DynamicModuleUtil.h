@interface DynamicModuleUtil : NSObject

+ (id)makeResult:(BOOL)a0 result:(id)a1 msg:(id)a2;
+ (id)makeResultSuccess:(id)a0 msg:(id)a1;
+ (id)makeResultFail:(id)a0 msg:(id)a1;
+ (id)makeResultCancel:(id)a0 msg:(id)a1;
+ (void)dictToKvData:(id)a0 kvData:(id)a1;

@end
