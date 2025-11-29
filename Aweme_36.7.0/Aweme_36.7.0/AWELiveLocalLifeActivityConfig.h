@class NSNumber, NSString, AWELiveLocalLifeActivityLabelURL;

@interface AWELiveLocalLifeActivityConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWELiveLocalLifeActivityLabelURL *activityLabelUrl;
@property (copy, nonatomic) NSNumber *configId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
