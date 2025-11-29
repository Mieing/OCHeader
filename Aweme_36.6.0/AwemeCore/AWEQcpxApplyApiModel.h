@class NSString;

@interface AWEQcpxApplyApiModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *fullPath;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
