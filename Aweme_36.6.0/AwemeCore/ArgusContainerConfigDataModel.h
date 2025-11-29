@class NSNumber, ArgusConfigBaseModel, NSString;

@interface ArgusContainerConfigDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *mergeMode;
@property (retain, nonatomic) ArgusConfigBaseModel *strategyConfig;
@property (retain, nonatomic) ArgusConfigBaseModel *aspectConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
