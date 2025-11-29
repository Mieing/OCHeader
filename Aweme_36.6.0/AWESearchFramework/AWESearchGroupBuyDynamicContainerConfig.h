@class NSString, NSDictionary, AWESearchGroupBuyDynamicContainerInfo;

@interface AWESearchGroupBuyDynamicContainerConfig : AWEBaseApiModel

@property (retain, nonatomic) AWESearchGroupBuyDynamicContainerInfo *containerInfo;
@property (copy, nonatomic) NSString *renderType;
@property (copy, nonatomic) NSString *cardTypeName;
@property (copy, nonatomic) NSString *bottomLynxSchema;
@property (copy, nonatomic) NSString *bottomLynxRawData;
@property (copy, nonatomic) NSDictionary *logData;
@property (copy, nonatomic) NSString *cacheId;
@property (copy, nonatomic) NSString *cacheRawData;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
