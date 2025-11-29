@class NSString, NSArray, AWEMessageReachVerifyParamsModel;

@interface AWEMessageReachSceneModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *sceneID;
@property (copy, nonatomic) NSString *msg;
@property (nonatomic) long long code;
@property (copy, nonatomic) NSArray *components;
@property (retain, nonatomic) AWEMessageReachVerifyParamsModel *verifyParams;
@property (nonatomic) unsigned long long componentAction;
@property (retain, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
