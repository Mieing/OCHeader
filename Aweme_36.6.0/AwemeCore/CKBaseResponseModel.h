@class NSDictionary, NSString;

@interface CKBaseResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *respHeaders;
@property (retain, nonatomic) id resp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
