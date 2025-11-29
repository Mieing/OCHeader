@class NSString, AWEURLModel;

@interface AWEPropGuideV2Model : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL showGuide;
@property (retain, nonatomic) AWEURLModel *iconURL;
@property (copy, nonatomic) NSString *propID;
@property (copy, nonatomic) NSString *propName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconURLJSONTransformer;
+ (id)showGuideJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
