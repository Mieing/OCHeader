@class NSString;

@interface AWEUserProfileJobInformationModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *jobName;
@property (copy, nonatomic) NSString *jumpUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
