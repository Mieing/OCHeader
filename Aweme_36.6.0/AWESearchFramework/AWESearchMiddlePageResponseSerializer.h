@class NSString;

@interface AWESearchMiddlePageResponseSerializer : NSObject <TTBinaryResponseSerializerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelMergePropertyConfig;
+ (id)modelFromPBResponse:(id)a0 error:(id)a1;
+ (id)serializer;

- (id)responseObjectForResponse:(id)a0 data:(id)a1 responseError:(id)a2 resultError:(id *)a3;

@end
