@class NSString, AWEComponentUIInfo, AWEURLModel;

@interface AWEAnchorLabelComponent : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long componentType;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) AWEURLModel *icon;
@property (copy, nonatomic) AWEComponentUIInfo *uiInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconJSONTransformer;
+ (id)uiInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
