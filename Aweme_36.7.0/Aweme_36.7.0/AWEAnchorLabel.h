@class AWEComponentUIInfo, NSArray, NSString;

@interface AWEAnchorLabel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) AWEComponentUIInfo *uiInfo;
@property (copy, nonatomic) NSArray *labelComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)uiInfoJSONTransformer;
+ (id)labelComponentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
