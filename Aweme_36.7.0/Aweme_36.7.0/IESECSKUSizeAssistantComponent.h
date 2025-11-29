@class NSString, IESECSKUSizeComponent;

@interface IESECSKUSizeAssistantComponent : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long specLocation;
@property (retain, nonatomic) IESECSKUSizeComponent *sizeComponent;
@property (nonatomic) BOOL hasSizeComponent;
@property (nonatomic) BOOL isFillUserClothesSize;
@property (nonatomic) BOOL isSupportClothesSizeRecommend;
@property (copy, nonatomic) NSString *recommendClothesSize;
@property (copy, nonatomic) NSString *linkSchema;
@property (nonatomic) long long sizeComponentType;
@property (copy, nonatomic) NSString *recommendText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
