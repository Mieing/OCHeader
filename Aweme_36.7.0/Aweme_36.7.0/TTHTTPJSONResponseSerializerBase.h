@class NSSet, NSString, NSObject;
@protocol TTJSONResponseSerializerProtocol;

@interface TTHTTPJSONResponseSerializerBase : NSObject <TTJSONResponseSerializerProtocol>

@property (retain, nonatomic) NSObject<TTJSONResponseSerializerProtocol> *currentImpl;
@property (copy, nonatomic) NSSet *acceptableContentTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serializer;

- (id)responseObjectForResponse:(id)a0 jsonObj:(id)a1 responseError:(id)a2 resultError:(id *)a3;
- (void).cxx_destruct;
- (id)init;

@end
