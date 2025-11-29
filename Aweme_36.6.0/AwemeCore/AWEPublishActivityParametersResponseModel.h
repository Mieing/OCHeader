@class NSArray, NSString;

@interface AWEPublishActivityParametersResponseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long videoDurationLimit;
@property (copy, nonatomic) NSArray *activityInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activityInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
