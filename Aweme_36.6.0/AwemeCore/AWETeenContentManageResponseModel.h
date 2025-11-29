@class NSString, AWETeenParentManagePrefer;

@interface AWETeenContentManageResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWETeenParentManagePrefer *data;
@property (nonatomic) unsigned long long statusCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
