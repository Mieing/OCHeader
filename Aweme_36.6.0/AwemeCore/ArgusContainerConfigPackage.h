@class NSString, NSDictionary, NSNumber, ArgusConfigBaseModel;

@interface ArgusContainerConfigPackage : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) ArgusConfigBaseModel *config;
@property (copy, nonatomic) NSNumber *createTimeStamp;
@property (copy, nonatomic) NSString *createTime;
@property (retain, nonatomic) NSDictionary *containerConfigStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
