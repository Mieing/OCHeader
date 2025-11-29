@class NSDictionary, NSString, IESVideoBSAutoBitrateModel;

@interface IESVideoBitrateCurveFilterConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *clientFilterRequirement;
@property (retain, nonatomic) NSString *clientPriority;
@property (retain, nonatomic) NSDictionary *serverFilterRequirement;
@property (retain, nonatomic) NSString *serverPriority;
@property (retain, nonatomic) IESVideoBSAutoBitrateModel *autoBitrateModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
