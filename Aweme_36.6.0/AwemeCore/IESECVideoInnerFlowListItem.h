@class NSString, NSDictionary;

@interface IESECVideoInnerFlowListItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *dynamicUrl;
@property (copy, nonatomic) NSDictionary *bizExtendParam;
@property (copy, nonatomic) NSString *rawData;
@property (copy, nonatomic) NSString *feedId;
@property (nonatomic) long long feedType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
