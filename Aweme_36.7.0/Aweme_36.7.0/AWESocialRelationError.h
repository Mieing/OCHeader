@interface AWESocialRelationError : NSObject

+ (id)networkError;
+ (BOOL)isSocialRelationError:(id)a0;
+ (id)unavailableError;
+ (BOOL)isUnavailableError:(id)a0;
+ (id)storageError;
+ (BOOL)isStorageError:(id)a0;
+ (id)invalidParameterError;
+ (id)errorWithCode:(long long)a0 description:(id)a1;

@end
