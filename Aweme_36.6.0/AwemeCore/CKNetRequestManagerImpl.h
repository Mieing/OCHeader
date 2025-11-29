@class NSString;

@interface CKNetRequestManagerImpl : NSObject <CKNetRequestProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestForJson:(id)a0 modelOfClass:(Class)a1 serializeType:(unsigned long long)a2 filterServerError:(id /* block */)a3 jsonFields:(id /* block */)a4 stageCallback:(id /* block */)a5 completion:(id /* block */)a6;
+ (void)lokiRequestForJson:(id)a0 modelOfClass:(Class)a1 serializeType:(unsigned long long)a2 jsonFields:(id /* block */)a3 stageCallback:(id /* block */)a4 completion:(id /* block */)a5;
+ (id)sharedInstance;

- (void)requestForJsonWithParam:(id)a0 completion:(id /* block */)a1;
- (void)requestForBinaryWithParam:(id)a0 completion:(id /* block */)a1;

@end
