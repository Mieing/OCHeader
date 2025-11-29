@interface QBBeaconBundleUtil : NSObject

+ (void)encodeWithCoder:(id)a0 forObject:(id)a1;
+ (id)initWithCoder:(id)a0 forObject:(id)a1;
+ (BOOL)saveQimei:(id)a0;
+ (id)getQimei;
+ (id)getBundleId;
+ (id)getBundleVersion;
+ (id)getBundleShortVer;
+ (id)getPasswordForUsername:(id)a0 andServiceName:(id)a1 error:(id *)a2;
+ (BOOL)storeUsername:(id)a0 andPassword:(id)a1 forServiceName:(id)a2 updateExisting:(BOOL)a3 error:(id *)a4;
+ (BOOL)deleteItemForUsername:(id)a0 andServiceName:(id)a1 error:(id *)a2;

@end
