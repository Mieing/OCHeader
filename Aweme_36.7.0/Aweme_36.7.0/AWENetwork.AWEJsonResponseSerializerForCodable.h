@class NSSet;

@interface AWENetwork.AWEJsonResponseSerializerForCodable : NSObject <TTJSONResponseSerializerProtocol> {
    void /* function */ acceptableContentTypes;
}

@property (nonatomic, copy) NSSet *acceptableContentTypes;

+ (id)serializer;

- (id)responseObjectForResponse:(id)a0 jsonObj:(id)a1 responseError:(id)a2 resultError:(id *)a3;
- (void).cxx_destruct;
- (id)init;

@end
