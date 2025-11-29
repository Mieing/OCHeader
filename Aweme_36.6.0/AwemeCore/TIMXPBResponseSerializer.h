@interface TIMXPBResponseSerializer : NSObject

+ (id)encryptResponseObjectWithRootObject:(id)a0 error:(id)a1 cmd:(int)a2 statusCode:(long long)a3 headers:(id)a4 data:(id)a5 resultError:(id *)a6;
+ (id)responseObjectForError:(id)a0 statusCode:(long long)a1 headers:(id)a2 data:(id)a3 resultError:(id *)a4;
+ (void)trackResponseDecodeWithRootObject:(id)a0 error:(id *)a1 cmd:(int)a2 headers:(id)a3;

@end
