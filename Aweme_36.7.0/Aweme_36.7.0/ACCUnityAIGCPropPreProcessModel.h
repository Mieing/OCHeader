@class NSString;

@interface ACCUnityAIGCPropPreProcessModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *resultPath;
@property (nonatomic) long long fileType;
@property (copy, nonatomic) NSString *fileName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
