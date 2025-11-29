@class NSString;

@interface AWEPublishActivityModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *activityName;
@property (copy, nonatomic) NSString *hashtagID;
@property (copy, nonatomic) NSString *hashtagName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
