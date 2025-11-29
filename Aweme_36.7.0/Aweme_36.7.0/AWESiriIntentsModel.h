@class AWESiriMediaIntentsModel, NSString, NSDictionary, AWESiriOpenPageIntentsModel;

@interface AWESiriIntentsModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long trigger;
@property (copy, nonatomic) NSString *sceneType;
@property (retain, nonatomic) AWESiriMediaIntentsModel *mediaIntentsModel;
@property (retain, nonatomic) AWESiriOpenPageIntentsModel *openPageIntentsModel;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *groupIdentifier;
@property (nonatomic) long long templateID;
@property (copy, nonatomic) NSDictionary *originalInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
