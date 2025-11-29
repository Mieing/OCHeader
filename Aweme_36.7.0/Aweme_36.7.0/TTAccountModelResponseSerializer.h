@class NSString;

@interface TTAccountModelResponseSerializer : TTAccountJSONResponseSerializer <TTResponseModelResponseSerializerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serializer;

- (id)responseObjectForResponse:(id)a0 jsonObj:(id)a1 requestModel:(id)a2 responseError:(id)a3 resultError:(id *)a4;

@end
