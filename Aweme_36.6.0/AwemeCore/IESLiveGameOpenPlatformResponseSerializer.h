@interface IESLiveGameOpenPlatformResponseSerializer : NSObject

+ (id)serializer;

- (id)responseObjectForResponse:(id)a0 data:(id)a1 error:(id *)a2;
- (id)responserErrorHandleWithError:(id)a0;

@end
