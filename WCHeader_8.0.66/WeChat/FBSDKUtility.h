@interface FBSDKUtility : NSObject

+ (id)dictionaryWithQueryString:(id)a0;
+ (id)queryStringWithDictionary:(id)a0 error:(id *)a1;
+ (id)URLDecode:(id)a0;
+ (id)URLEncode:(id)a0;
+ (id)startGCDTimerWithInterval:(double)a0 block:(id /* block */)a1;
+ (void)stopGCDTimer:(id)a0;
+ (id)SHA256Hash:(id)a0;

@end
