@class NSNumber, NSString, NSDictionary;

@interface BDXBridgeWebcastXbridge3ConnectLongLinkMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) NSNumber *service;
@property (retain, nonatomic) NSNumber *method;
@property (copy, nonatomic) NSDictionary *custom_params;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
