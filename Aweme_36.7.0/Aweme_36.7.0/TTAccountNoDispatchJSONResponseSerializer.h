@class NSSet, NSString;

@interface TTAccountNoDispatchJSONResponseSerializer : TTHTTPJSONResponseSerializerBase <TTJSONResponseSerializerProtocol>

@property (copy, nonatomic) NSSet *acceptableContentTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)normalizeError:(id *)a0 withResponseResult:(id)a1;
+ (void)error:(id *)a0 addHTTPStatusCodeWithResponse:(id)a1;
+ (void)handleResponseResult:(id)a0 responseError:(id)a1 resultError:(id *)a2 originalURL:(id)a3;
+ (id)dictionaryWithJSONData:(id)a0 resultError:(id *)a1;
+ (void)validateResponseResult:(id)a0 resultError:(id *)a1;
+ (void)normalParseResponseResult:(id)a0 resultError:(id *)a1 exceptionInfo:(id *)a2 exceptionAsError:(BOOL)a3 originalURL:(id)a4;
+ (void)specialHandleResponseResult:(id)a0 withError:(id)a1 originalURL:(id)a2;
+ (id)serializer;

- (id)responseObjectForResponse:(id)a0 jsonObj:(id)a1 responseError:(id)a2 resultError:(id *)a3;
- (id)init;

@end
