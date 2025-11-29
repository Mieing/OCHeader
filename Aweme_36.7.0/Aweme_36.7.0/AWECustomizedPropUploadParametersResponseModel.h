@class NSString, NSDictionary;

@interface AWECustomizedPropUploadParametersResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *uploadHostName;
@property (retain, nonatomic) NSDictionary *authorization2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
