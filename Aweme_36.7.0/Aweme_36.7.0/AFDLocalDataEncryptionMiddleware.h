@interface AFDLocalDataEncryptionMiddleware : NSObject

+ (id)aesDecryptModelsForTable:(id)a0 models:(id)a1;
+ (id)aesEncryptPrimaryIDsForTable:(id)a0 primaryIDs:(id)a1;
+ (id)aesDecryptPrimaryIDsForTable:(id)a0 primaryIDs:(id)a1;
+ (id)aesEncryptModelsForTable:(id)a0 models:(id)a1;
+ (void)aesDecryptModelsForTables:(id)a0 models:(id)a1;

@end
