@class AWEPOILynxModel, NSString;

@interface AWEPOIDetailInfoDynamicModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long identifier;
@property (nonatomic) long long type;
@property (retain, nonatomic) AWEPOILynxModel *lynx;
@property (nonatomic) long long showDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
