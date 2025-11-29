@class NSString, AWEURLModel;

@interface AWEPropGuideModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL showGuide;
@property (retain, nonatomic) AWEURLModel *iconURL;
@property (copy, nonatomic) NSString *propName;
@property (copy, nonatomic) NSString *propID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconURLJSONTransformer;
+ (id)showGuideJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
